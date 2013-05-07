SDL_resource_manager
====================

An Ogre-like resource manager for SDL 1.2  (Will be updated for 2.0 when 2.0 is ready)

What exactly is this?
---------------------

The SDL resource manager is there to help you loading resources.
Currently it only loads images, later it will be able to load sounds and music too.
When using the resource manager, you don't need to load everything by hand - Just tell the manager which directories to load and it will do everything for you.
The manager stores the resources in a hashmap, they can be adressed by their filename (std::string or char[])

The long term goal is to make the resource loading process asynchronous, so you can load stuff in the background while doing something else.

I got the idea from the Ogre3d ResourceManager class.


How to link to your project
---------------------------

Link to SDL_resource_manager,


also link against boost_system, libboost_filesystem and SDL_image

Example:
	g++ foo.cpp -lSDL_resouce_manager -lboost_system -lboost_filesystem `sdl-config --cflags` -lSDL_image -o bar


How to build
------------

Run make to get an .a archive file.

Run make install to install the lib to /usr/local/libs, the header file to /usr/local/includes

Run make example to get an example of how the manager works
