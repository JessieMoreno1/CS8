//
// Created by Jessie Mejia on 4/28/23.
//

#include "MenuBar.h"

MenuBar::MenuBar() {
    m1 = {"soundtracks", "Menu 1 item 2", "Menu 1 item 3", "Menu 1 item 4", "Menu 1 item 5"};
    m2 = {"composers", "Menu 2 item 2", "Menu 2 item 3", "Menu 2 item 4", "Menu 2 item 5"};

    m4 = {"profile", "Menu 3 item 2", "Menu 3 item 3", "Menu 3 item 4", "Menu 3 item 5"};

    m1.setPosition({1000,25});
    m2.setPosition({1200,25});
//    m3.setPosition({1400,25});
    m4.setPosition({1600,25});

}

void MenuBar::eventHandler(sf::RenderWindow &window, sf::Event event) {
    m1.eventHandler(window, event);
    m2.eventHandler(window,event);
//    m3.eventHandler(window,event);
    m4.eventHandler(window,event);
}

void MenuBar::setPosition(const sf::Vector2f &position) {
    m1.setPosition(position);
}

void MenuBar::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if (!checkState(HIDDEN))
    {
        target.draw(m1);
        target.draw(m2);
//    target.draw(m3);
        target.draw(m4);
    }

}
