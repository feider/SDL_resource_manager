#include "SDL_resource_manager.h"
#include <iostream>
#include <string>

int main()
{
	SDL_Init(SDL_INIT_EVERYTHING); // just to be sure

	SDL::ResourceManager res_man; // create the resource manager

	bool temp = res_man.loadDirectory("example"); // load everything in "example"

	std::cout<<temp<<std::endl; // should be true

	temp = res_man.loadDirectory("honk"); // try to load everything in the non existent folder "honk"

	std::cout<<temp<<std::endl; // should be false

	std::cout<<res_man("shitty_floor.png")<<std::endl; // access an element

	std::cout<<res_man("nice_floor.png")<<std::endl; // access an non-existent element

	return 0;
}
