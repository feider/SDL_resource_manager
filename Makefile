SDL_object: SDL_resource_manager.cpp
	g++ SDL_resource_manager.cpp -o SDL_resource_manager.o
	ar crs libSDL_resource_manager.a -lboost_system -lboost_filesystem -lSDL -lSDL_image SDL_resource_manager.o
	ranlib libSDL_resource_manager.a

example: example.cpp SDL_object
	g++ -c example.cpp -o example.o
	g++ example.o -I./ -L./ -lSDL_resource_manager -o test


install:
	cp libSDL_resource_manager.a /usr/local/lib/
	cp SDL_resource_manager.h /usr/local/include/
