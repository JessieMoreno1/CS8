//
// Created by Jessie Mejia on 4/3/23.
//

#include "MenuBar.h"

MenuBar::MenuBar() {
    m1 = {"Menu 1 item 1", "Menu 1 item 2", "Menu 1 item 3", "Menu 1 item 4", "Menu 1 item 5"};
    m2 = {"Menu 2 item 1", "Menu 2 item 2", "Menu 2 item 3", "Menu 2 item 4", "Menu 2 item 5"};
    m3 = {"Menu 3 item 1", "Menu 3 item 2", "Menu 3 item 3", "Menu 3 item 4", "Menu 3 item 5"};

    m1.setPosition({300, 0});
    m2.setPosition({500,0});
    m3.setPosition({700,0});

}

void MenuBar::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(m1);
    target.draw(m2);
    target.draw(m3);
}

void MenuBar::eventHandler(sf::RenderWindow &window, sf::Event event) {
    m1.eventHandler(window, event);
    m2.eventHandler(window, event);
    m3.eventHandler(window,event);

}

void MenuBar::init() {
//    list.enableState(HIDDEN);
}
