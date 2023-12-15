#include <KrakenEngine.hpp>
#include <memory>
#include <iostream>

#include "../include/Player.hpp"
#include "../include/Wall.hpp"
#include "../include/Tracker.hpp"

const kn::math::Vector2 WIN_SIZE = { 800, 600 };
float GRAVITY = 980.0f;


int main() {
	kn::RenderWindow window(WIN_SIZE, "Game");
	kn::TextureCache textureCache(window);
	kn::time::Clock clock;
	kn::Font font(window, "assets/KdamThmorPro-Regular.ttf", 34);

	textureCache.create("player", { 50, 50 }, { 255, 0, 0 });
	textureCache.create("wall", { 50, 50 }, { 0, 255, 0 });
	textureCache.create("tracker", {20, 20}, { 0, 0, 255 });
	textureCache.load("background", "assets/background.png");
	textureCache.move("hello world", font.render("Hello, World!", true, { 255, 255, 255 }));

	std::shared_ptr<kn::Texture> bgTexture = textureCache.getTexture("background");
	bgTexture->fitWidth(WIN_SIZE.x);

	std::shared_ptr<kn::Texture> hwTexture = textureCache.getTexture("hello world");
	kn::Rect hwRect = hwTexture->getRect();
	hwRect.setCenter({0, 0});

	Player player(window, textureCache.getTexture("player"));
	Tracker tracker(window, textureCache.getTexture("tracker"));

	for (float x = 0.0f; x <= WIN_SIZE.x - 50.0f; x += 50.0f) {
		kn::Sprite::addSprite(
			std::make_unique<Wall>(window, textureCache.getTexture("wall"), kn::math::Vector2(x, WIN_SIZE.y))
		);
	}
	kn::Sprite::addSprite(
		std::make_unique<Wall>(window, textureCache.getTexture("wall"), kn::math::Vector2(WIN_SIZE.x - 150.0f, WIN_SIZE.y - 50.0f))
	);

	bool done = false;
	while (!done) {
		double deltaTime = clock.tick(60);

		for (const auto &event : window.getEvents()) {
			if (event.type == KN_QUIT) {
				done = true;
			} else if (event.type == KN_KEYDOWN) {
				if (event.key.keysym.sym == KNK_ESCAPE) {
					done = true;
				}
			}
		}
		
		window.fill({ 40, 40, 40 });
		window.blit(bgTexture, bgTexture->getRect());

		for (const auto& sprite : kn::Sprite::getSprites()) {
			sprite->process(deltaTime);
		}
		window.blit(hwTexture, hwRect);  // FIXME: This is not working
		player.process(deltaTime);
		tracker.update(deltaTime, player.getPosition());
		
		window.flip();
	}

	return EXIT_SUCCESS;
}
