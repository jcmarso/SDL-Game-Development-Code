#ifndef __LevelParser__
#define __LevelParser__

#include "Level.h"
#include <vector>
#include "tinyxml.h"

class LevelParser
{
public:
Level * parseLevel(const char* levelFile);

private:
void parseTilesets(TiXmlElement* pTilesetRoot, std::vector<Tileset>* pTilesets);
void parseTileLayer(TiXmlElement* pTileElement, std::vector<Layer*>* pLayers, const std::vector<Tileset>* pTilesets);
void parseTextures(TiXmlElement* pTextureRoot);
void parseObjectLayer(TiXmlElement* pObjectElement, std::vector<Layer*>* pLayers);
int m_tileSize;
int m_width;
int m_height;
};
#endif // __LevelParser__