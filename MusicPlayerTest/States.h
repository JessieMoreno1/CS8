//
// Created by Jessie Mejia on 4/28/23.
//

#ifndef MUSICPLAYERTEST_STATES_H
#define MUSICPLAYERTEST_STATES_H

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


#endif //MUSICPLAYERTEST_STATES_H
