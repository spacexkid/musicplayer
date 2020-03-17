/*
 * TextureLoader.cpp
 *
 *  Created on: Mar 2, 2020
 *      Author: musko
 */
#include "TextureLoader.h"
#include <map>
#include <string>
#include <memory>
#include <stdexcept>
#include <cassert>
#include <SFML/Graphics.hpp>
 //Gets a texture
void TextureLoader::load(int id, const std::string& filename)
{
	std::unique_ptr<sf::Texture> texture(new sf::Texture());
	if (!texture->loadFromFile(filename))
	{
		throw std::runtime_error("TextureLoader::load - Failed to load " + filename);
	}
	//Checks to see if theres a texture
	auto inserted = mTextureMap.insert(std::make_pair(id, std::move(texture)));
	assert(inserted.second);
}
//Loads a texture into sprite (uses id for texture)
sf::Texture& TextureLoader::get(int id)
{
	auto found = mTextureMap.find(id);
	assert(found != mTextureMap.end());
	return *found->second;
}

const sf::Texture& TextureLoader::get(int id) const
{
	auto found = mTextureMap.find(id);
	assert(found != mTextureMap.end());
	return *found->second;
}


