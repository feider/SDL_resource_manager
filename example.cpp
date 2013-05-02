#include "SDL_resource_manager.h"
#include <iostream>
#include <string>

int main()
{
	SDL_Init(SDL_INIT_EVERYTHING); // just to be sure

	SDL::ResourceManager res_man("example"); // create the resource manager and load everything in example

	int count = res_man.loadDirectory("honk"); // try to load everything in the non existent folder "honk"

	std::cout<<count<<std::endl; // honk does not exist, so this should be -1

	std::cout<<res_man("shitty_floor.png")<<std::endl; // access an element

	std::cout<<res_man("nice_floor.png")<<std::endl; // access an non-existent element

	{
		SDL::ResourceManager another_res_man; // Create another resource manager

		count = another_res_man.loadDirectory("example");

		std::cout<<count<<std::endl; // should be the number of loaded images

		std::cout<<another_res_man("shitty_floor.png")<<std::endl; // access an element

		delete(&another_res_man); // the memory is freed
	}


	return 0;
}
