#pragma once
#include <SDL2/SDL.h>
#include <string>
#include <vector>
#include "Entity.h"
class HealthSystem
{
    private:
    std::vector<Entity> entities; 
    public:
    void addEntiry(Entity e){
        entities.push_back(e);
    }
    void update()
    {
        for (Entity& e : entities)
        {
            for(Component* c: e.getComponents())
            {
                if(c->getName() == "Health")
                {
                    HealthComponent* healthySys{dynamic_cast<HealthComponent*>(c)};
                    std::cout << e.id << ": " << healthySys->getHealth() << std::endl;
                }
            }
        }
        
    }
    void increase(int t_amount,Entity& e)
    {
         
            for(Component* c: e.getComponents())
            {
                if(c->getName() == "Health")
                {
                    HealthComponent* healthySys{dynamic_cast<HealthComponent*>(c)};
                    healthySys->setHealth(healthySys->getHealth() +t_amount);
                }
            }
        
        
    }
    void decrease(int t_amount,Entity& e)
    {
 
            for(Component* c: e.getComponents())
            {
                if(c->getName() == "Health")
                {
                    HealthComponent* healthySys{dynamic_cast<HealthComponent*>(c)};
                   healthySys->setHealth(healthySys->getHealth() -t_amount);
                }
            }
        
        
    }
};