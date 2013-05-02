SDL_resource_manager
====================

An Ogre-like resource manager for SDL 1.2  (Will be updated for 2.0 when 2.0 is ready)



How to link to your project
---------------------------

Just include the .o file into your compile command, then link agains boost_system, libboost_filesystem, SDL and SDL_image
Example: 
	g++ SDL_resource_manager.o foo.o lboost_system -lboost_filesystem -lSDL -lSDL_image -o bar 


How to build
------------

Run make and you get a .o file.

Run make example to get an example of how the manager works
