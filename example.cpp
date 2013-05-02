#include "SDL_resource_manager.h"
#include <iostream>
#include <string>

int main()
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL::ResourceManager res_man;
	bool temp = res_man.loadDirectory("foobar");
	std::cout<<temp<<std::endl;
	temp = res_man.loadDirectory("honk");
	std::cout<<temp<<std::endl;


	return 0;
}
