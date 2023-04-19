//
// Created by Jessie Mejia on 3/21/23.
//

#include "Menu.h"

void Menu::init() {
    list.enableState(HIDDEN);
}

Menu::Menu() {

}

Menu::Menu(std::initializer_list<std::string> items) {
    std::initializer_list<std::string>::iterator iter = items.begin();

    header.setString(*iter);
    header.setBoxSize({200,50});
    ++iter;
    for(; iter != items.end(); ++iter)
    {
        list.addItem(*iter);
    }
    init();
}

void Menu::eventHandler(sf::RenderWindow &window, sf::Event event) {
    list.eventHandler(window, event);
    header.eventHandler(window, event);

    if(MouseEvents::isClick(header, window))
    {
        list.disableState(HIDDEN);
    }
    else if (MouseEvents::isNotClick(header, window))
    {
        std::string s;
        for (ListItem& l : list.getItems())
        {
            if(MouseEvents::isClick(l, window))
            {
                if(l.getString() == "Resize")
                {
                    window.setSize({1080,970});
                }
            }
        }
        list.enableState(HIDDEN);
    }
}

void Menu::update() {

}

void Menu::addItems(std::string item) {
    list.addItem(item);
}

void Menu::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(header);
    target.draw(list);
}

void Menu::setPosition(const sf::Vector2f &position) {
    list.setPosition(position);
    header.setPosition(position);
    Position::bottom(header, list);


}
