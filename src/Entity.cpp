//
// Created by razva on 5/26/2026.
//

#include "../include/Entity.h"
using namespace std;
int Entity::nextId = 1;
Entity::Entity() : id(nextId++){}

int Entity::getId() const {
    return id;
}

string Entity::toString() {
    return to_string(id);
}
