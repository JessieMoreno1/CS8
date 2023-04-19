//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_HELPER_CPP
#define TEXTINPUTPROJECT_HELPER_CPP

#include "Helper.h"

template <typename T>
void Helper::centerText(const T &obj, sf::Text &text)
{
    sf::FloatRect textRect = text.getGlobalBounds();
    sf::FloatRect tRect = obj.getGlobalBounds();
    sf::Vector2f center = {textRect.width/2.0f, textRect.height/2.f};
    sf::Vector2f localBounds = {center.x + text.getLocalBounds().left, center.y + text.getLocalBounds().top};
    sf::Vector2f rounded = {std::round(localBounds.x), std::round(localBounds.y)};
    text.setOrigin(rounded);
    text.setPosition({tRect.left + tRect.width/2, tRect.top + tRect.height/2});
}

template<class T, class S>
void Helper::left(T &self, const S &ref, float spacing) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({s.left - r.width - spacing, s.top});
}

template<class T, class S>
void Helper::right(T &self, const S &ref, float spacing) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({r.left + r.width + spacing, s.top});
}

template<class T, class S>
void Helper::top(T &self, const S &ref, float spacing) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({s.left,r.top - s.height - spacing});
}

template<class T, class S>
void Helper::bottom(T &self, const S &ref, float spacing) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({s.left, r.top + r.height + spacing});
}

template<class T, class S>
void Helper::center(T &self, const S &ref) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({s.left - ((s.left + s.width/2) - (r.left + r.width/2)),
                      s.top - ((s.top + s.height/2) - (r.top + r.height/2))});

}

#endif