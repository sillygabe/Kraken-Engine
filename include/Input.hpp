#pragma once
#include <SDL.h>
#include <vector>
#include "Math.hpp"

namespace DK_Input {
	const Uint8* getKeysPressed();
	DK_Math::Vector2f getVector(
        const std::vector<SDL_Scancode>& up,
        const std::vector<SDL_Scancode>& left,
        const std::vector<SDL_Scancode>& down,
        const std::vector<SDL_Scancode>& right
    );
}