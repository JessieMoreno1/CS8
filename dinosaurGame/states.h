//
// Created by Jessie Mejia on 4/18/23.
//

#ifndef DINOSAURGAME_STATES_H
#define DINOSAURGAME_STATES_H

#include "statesEnum.h"
#include <SFML/Graphics.hpp>
#include <map>

class states {
private:

    std::map<statesEnum, bool> map;
    void load();
public:
    states();
    bool checkState(statesEnum state) const;
    void enableState(statesEnum state);
    void disableState(statesEnum state);
    void setState(statesEnum state, bool value);
    void toggleState(statesEnum state);
};


#endif //DINOSAURGAME_STATES_H
