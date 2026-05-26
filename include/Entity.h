//
// Created by razva on 5/26/2026.
//

#ifndef CPP_PROJECT_PLANNING_THEROCKETS_ENTITY_H
#define CPP_PROJECT_PLANNING_THEROCKETS_ENTITY_H
#include <string>


class Entity {
protected:
    int id;
public:
    Entity(int id);
    virtual ~Entity() = default;
    int getId() const;

    virtual std::string toFileEntry() = 0;
    virtual std::string toString();
};


#endif //CPP_PROJECT_PLANNING_THEROCKETS_ENTITY_H
