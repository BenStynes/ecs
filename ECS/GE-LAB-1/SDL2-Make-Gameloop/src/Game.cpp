#include "../include/Game.h"

Game::Game() :
    m_gameIsRunning{ false }, player("player"),Enemy("Enemy")
{
 gWindow = SDL_CreateWindow("SDL game-loop window", SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN); 

 gScreenSurface = NULL;
player.addComponent(new HealthComponent(100));
Enemy.addComponent(new HealthComponent(50));
hsys.addEntiry(player);
hsys.addEntiry(Enemy);

gXOut = NULL;
}
    
Game::~Game()
{
    cleanUp();
}
    
void Game::run()
{
    m_gameIsRunning = true;
    while (m_gameIsRunning)
    {
        processEvents();
       
    }
}

void Game::processEvents()
{
     
     SDL_Event e;

			//While application is running
			while( m_gameIsRunning )
			{
				
				//Handle events on queue
				while( SDL_PollEvent( &e ) != 0 )
				{
					//User requests quit
					if( e.type == SDL_QUIT )
					{
						m_gameIsRunning = false;
					}
					if(e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_q) 
					{
						
						hsys.increase(5,player);
					}
					if(e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_e) 
					{
						hsys.decrease(15,player);
					}
				}

				//Apply the image
				SDL_BlitSurface( gXOut, NULL, gScreenSurface, NULL );
			
				//Update the surface
				SDL_UpdateWindowSurface( gWindow );
					 update();
        render();
			}
		
		}


void Game::update()
{
  hsys.update();
}

void Game::render()
{
   
}

void Game::cleanUp()
{
    
}
void Game::close()
{
	//Deallocate surface
	SDL_FreeSurface( gXOut );
	gXOut = NULL;

	//Destroy window
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;

	//Quit SDL subsystems
	SDL_Quit();
}