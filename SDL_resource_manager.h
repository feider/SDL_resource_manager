#include <SDL/SDL.h>
#include <string>
#include <map>

#ifndef RES_MAN_H
#define RES_MAN_H

#define SDL_RESMAN_STRICT 0x1

namespace SDL
{
	class ResourceManager
	{
	private:
		std::map<std::string, SDL_Surface *> images;

	public:
		ResourceManager();
		~ResourceManager();
		ResourceManager(std::string path);
		SDL_Surface * operator()(std::string image_name);
		bool loadImage(std::string path);
		int loadDirectory(std::string path);

	};
}

#endif
