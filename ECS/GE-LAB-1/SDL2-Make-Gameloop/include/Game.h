#include <SDL2\SDL.h>
#include <iostream>
#include <string>
#include "Systems.h"
class Game
{
public:

    Game();
    ~Game();
    void run();
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 480;
private:
SDL_Window* gWindow;
SDL_Surface* gScreenSurface;


SDL_Surface* gXOut ;
    void processEvents();
    void update();
    void render();
    void close();
    void cleanUp();

    bool m_gameIsRunning;
    HealthSystem hsys;
    Entity player;
    Entity Enemy;

};