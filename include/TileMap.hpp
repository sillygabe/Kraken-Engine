#pragma once

#include <memory>
#include <vector>
#include <string>

#include "RenderWindow.hpp"
#include "Tile.hpp"
#include "TextureCache.hpp"


namespace kn {

/// @brief A class that represents a tile map.
/// @details This class reads from TMX files generated by the Tiled map editor.
/// @note This class is not ready for use yet.
class TileMap final {
public:
    /// @brief Constructs a tile map from a TMX file.
    /// @param tmxPath The path to the TMX file.
    TileMap(RenderWindow& window, TextureCache& textureCache, const std::string &tmxPath);
    ~TileMap() = default;

private:
    RenderWindow& window;
    std::shared_ptr<Texture> mapTexture;

    tmx::Map m_map;  // FIXME: This is causing a build seizure.
};

}
