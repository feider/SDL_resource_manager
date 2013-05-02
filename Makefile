SDL_object: SDL_resource_manager.cpp
	g++ -c SDL_resource_manager.cpp -o SDL_resource_manager.o

example: example.cpp SDL_object
	g++ -c example.cpp -o example.o
	g++ SDL_resource_manager.o example.o -lboost_system -lboost_filesystem -lSDL -lSDL_image -o test

