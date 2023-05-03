//
// Created by Jessie Mejia on 4/28/23.
//

#include "List.h"

void List::position() {
    for (int i = 1; i < items.size(); i++)
        Position::bottom(items[i-1], items[i]);
}

void List::addItem(const std::string &text, void (*f)()) {
    items.emplace_back(text, sf::Vector2f {200.f,50.f});
    position();
}

void List::setPosition(const sf::Vector2f position) {
    items[0].setPosition(position);

    for(int i = 1; i < items.size(); i++) {
        Position::bottom(items[i - 1], items[i]);
    }
}

void List::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if (!checkState(HIDDEN))
    {
        for (const ListItem& l : items)
        {
            target.draw(l);
        }
    }
}

void List::eventHandler(sf::RenderWindow &window, sf::Event event) {
    for (ListItem& l : items)
    {
        l.eventHandler(window, event);
    }
}

sf::FloatRect List::getGlobalBounds() {
    sf::FloatRect f = items[0].getGlobalBounds();

    f.height *= items.size();

    return f;
}

std::vector<ListItem> &List::getItems() {
    return items;
}

void List::update() {

}
