#include "SDL_resource_manager.h"
#include <boost/filesystem.hpp>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <iostream>
namespace bfs = boost::filesystem;



bool SDL::ResourceManager::loadDirectory(std::string path)
{
	bfs::path dir_path(path);

	if(!exists(dir_path))
		return false;
	bfs::directory_iterator end_iter; // default construction yields past-the-end
	for(bfs::directory_iterator iter(dir_path); iter != end_iter; iter++)
	{
		std::string name(iter->path().filename().string());
		std::cout<<"loading "<< path << "/"<< name<<"...\t";

		std::string load = path + "/" + name;
		SDL_Surface * temp = IMG_Load(load.c_str());

		if(NULL == temp)
		{
			std::cout<<"failed"<<std::endl;
		}
		else
		{
			images.insert( std::pair<std::string, SDL_Surface*> ( name, temp ) );
			std::cout<<"done"<<std::endl;
		}
	}
	return true;
}

bool SDL::ResourceManager::loadImage(std::string path)
{
	SDL_Surface * temp = IMG_Load(path.c_str());
	if(NULL==temp)
	{
		return false;
	}
	std::string name(path.substr(path.find_last_of("/")));
	images.insert( std::pair<std::string, SDL_Surface*> ( name, temp ) );
	return true;
}
