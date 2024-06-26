#pragma once

#include <map>
#include <memory>

#include "Texture.hpp"

namespace kn
{
namespace math
{
class Vec2;
};

namespace cache
{
/**
 * @brief Load a texture file.
 *
 * @param name The name of the texture.
 * @param path The path to the texture file.
 *
 * @return The texture pointer.
 */
[[maybe_unused]] std::shared_ptr<Texture> load(const std::string& name, const std::string& path);

/**
 * @brief Create a solid texture.
 *
 * @param name The name of the texture.
 * @param size The size of the texture.
 * @param color The color of the texture.
 *
 * @return The texture pointer.
 */
[[maybe_unused]] std::shared_ptr<Texture> create(const std::string& name, const math::Vec2& size,
                                                 Color color);

/**
 * @brief Move an existing texture.
 *
 * @param name The name of the texture.
 * @param texture The texture to move.
 *
 * @note This function is recommended for loading fonts.
 *
 * @return The texture pointer.
 */
[[maybe_unused]] std::shared_ptr<Texture> move(const std::string& name,
                                               std::shared_ptr<Texture> texture);

/**
 * @brief Get the const reference to the texture cache.
 *
 * @return The texture cache.
 */
const std::map<std::string, std::shared_ptr<Texture>>& getCache();

/**
 * @brief Unload a texture from cache.
 *
 * @param name The name of the texture.
 */
void unload(const std::string& name);

/**
 * @brief Unload all textures from cache.
 *
 * @note This method is called in the destructor.
 */
void unloadAll();

/**
 * @brief Get a texture pointer from cache.
 *
 * @param name The name of the texture.
 *
 * @return The texture pointer.
 */
std::shared_ptr<Texture> getTexture(const std::string& name);
} // namespace cache
} // namespace kn
