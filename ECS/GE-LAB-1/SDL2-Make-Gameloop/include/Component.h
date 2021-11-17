#pragma once
#include <SDL2/SDL.h>
#include <string>
class Component
{
public:
    Component(std::string t_name){name = t_name;}
    virtual std::string getName() {return name;}
    std::string name = "";

};

class HealthComponent : public Component
{
public:
  HealthComponent(int t_health) : Component("Health"), health(t_health){};
  int getHealth() {return health;}
  void setHealth(int t_heal) { health = t_heal;
  }
  private:
  int health;

};