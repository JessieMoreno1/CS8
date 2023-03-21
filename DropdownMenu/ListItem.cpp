//
// Created by Jessie Mejia on 3/21/23.
//

#include "ListItem.h"

void ListItem::setupText(std::string text) {
    this -> text.setFont(Fonts::getFont(BEBAS));
    this -> text.setString(text);
    this -> text.setFillColor(sf::Color::Magenta);
}

void ListItem::setupBox(sf::Vector2f size) {
    setBoxSize(size);
    Position::centerText(box, this->text);
}

ListItem::ListItem() : ListItem("", {0.f,0.f}) {

}

ListItem::ListItem(std::string text, sf::Vector2f size) {
    setupText(text);
    setupBox(size);
}

void ListItem::onClick(void (*f)(), sf::RenderWindow &window) {
    if (MouseEvents::isClick(box,window))
    {
        f();
    }
}

void ListItem::eventHandler(sf::RenderWindow &window, const sf::Event event) {
    if (MouseEvents::isHover(box, window))
    {
        box.setFillColor(hoverColor);
        text.setFillColor(backgroundColor);
    }
    else {
        box.setFillColor(backgroundColor);
        text.setFillColor(hoverColor);
    }
}

void ListItem::update() {

}

void ListItem::setBoxSize(sf::Vector2f size) {
    box.setSize(size);
}

void ListItem::setTextSize(unsigned int size) {
    text.setCharacterSize(size);
    Position::centerText(box, text);
}

sf::FloatRect ListItem::getGlobalBounds() const {
    return box.getGlobalBounds();
}

void ListItem::setPosition(const sf::Vector2f &position) {
    box.setPosition(position);
    Position::centerText(box, text);
}

void ListItem::setPosition(float x, float y) {
    setPosition({x,y});
}

void ListItem::setString(std::string text) {
    this -> text.setString(text);
}

std::string ListItem::getString() {
    return text.getString();
}

void ListItem::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if (!checkState(HIDDEN))
    {
        target.draw(box);
        target.draw(text);
    }
}
