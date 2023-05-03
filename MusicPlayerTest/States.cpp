//
// Created by Jessie Mejia on 4/28/23.
//

#include "States.h"

void States::load() {
    for (int i = 0; i < LAST_STATE; i++)
    {
        map[static_cast<statesEnum>(i)] = false;
    }
}

States::States() {
    load();
}

bool States::checkState(statesEnum state) const {
    return map.at(state);
}

void States::enableState(statesEnum state) {
    setState(state,true);
}

void States::disableState(statesEnum state) {
    setState(state,false);

}

void States::setState(statesEnum state, bool value) {
    map.at(state) = value;
}

void States::toggleState(statesEnum state) {
    setState(state, !map.at(state));
}
