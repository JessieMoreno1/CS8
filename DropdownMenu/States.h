//
// Created by Jessie Mejia on 3/21/23.
//

#ifndef DROPDOWNMENU_STATES_H
#define DROPDOWNMENU_STATES_H

#include "SFML/Graphics.hpp"
#include <map>
#include "statesEnum.h"

class States {
private:
    std::map<statesEnum, bool> map;
    void load();
public:
    States();
    bool checkState(statesEnum state) const;
    void enableState(statesEnum state);
    void disableState(statesEnum state);
    void setState(statesEnum state, bool value);
    void toggleState(statesEnum state);
};


#endif //DROPDOWNMENU_STATES_H
