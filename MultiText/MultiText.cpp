//
// Created by Jessie Mejia on 2/28/23.
//

#include "MultiText.h"

MultiText::MultiText() {
    letter.setFont(Font::getFont());
    letter.setFillColor(sf::Color::White);
    letter.setCharacterSize(40);
}

void MultiText::addEventHandler(sf::RenderWindow &window, sf::Event &event) {
    if (event.type == sf::Event::TextEntered)
    {
        if (event.text.unicode < 128)
        {
            std::cout << "ASCII character typed : " << static_cast<char>(event.text.unicode) << std::endl;
            //string.push_back(static_cast<char>(event.text.unicode));
            letter.setString(static_cast<char>(event.text.unicode));
            string.push_back(letter);
        }
    }
}

void MultiText::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    for (const Letter& letter : string) {
        target.draw(letter);
    }

}
