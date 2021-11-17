#pragma once
#include <SDL2/SDL.h>
#include <string>
#include "Component.h"
#include <vector>
#include <iostream>
class Entity 
{
    
private:
std::vector<Component*> components;
    /* data */

public:
    Entity(std::string t_name) : id(t_name){}
    void addComponent(Component* c) {components.push_back(c);}
    void removeComponent(Component* c){;}
    std::vector<Component*> getComponents() {return components;}
std::string id;
  
};



