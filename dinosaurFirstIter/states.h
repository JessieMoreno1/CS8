//
// Created by Jessie Mejia on 4/27/23.
//

#ifndef DINOSAURFIRSTITER_STATES_H
#define DINOSAURFIRSTITER_STATES_H

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


#endif //DINOSAURFIRSTITER_STATES_H
