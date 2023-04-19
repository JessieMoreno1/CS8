//
// Created by Jessie Mejia on 3/18/23.
//

#ifndef TEXTINPUTPROJECT_STATES_H
#define TEXTINPUTPROJECT_STATES_H

#include "StatesEnum.h"
#include <SFML/Graphics.hpp>
#include <map>

class States {
private:

    std::map<StatesEnum, bool> map;
    void load();
public:
    States();
    bool checkState(StatesEnum state) const;
    void enableState(StatesEnum state);
    void disableState(StatesEnum state);
    void setState(StatesEnum state, bool value);
    void toggleState(StatesEnum state);
};


#endif //TEXTINPUTPROJECT_STATES_H
