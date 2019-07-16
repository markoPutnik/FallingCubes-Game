#include "Game.h"
#include "TextureManager.h"
#include "Collision.h"

SDL_Rect desRect{500, 592, 64, 64};
SDL_Rect desRect2{ 0, 656, 1080, 64 };

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen) {

	int flags = fullscreen ? SDL_WINDOW_FULLSCREEN : 0;

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window)
			cout << "Window created\n";

		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
			cout << "Renderer created\n";

		SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);

		texture = TextureManager::getTex(renderer, "assets/stone.bmp");
		floorTex = TextureManager::getTex(renderer, "assets/floor.bmp");

		m_Running = true;

	}


}

void Game::handleEvents() {

	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type) {
	case SDL_QUIT:
		m_Running = false;
		break;
	case SDL_KEYDOWN:
		switch (event.key.keysym.sym) {
		case SDLK_a:
			cout << "A pressed\n";
			desRect.x -= 7;
			break;
		case SDLK_d:
			cout << "D pressed\n";
			desRect.x += 7;
			break;
		default:
			break;
		}
	case SDL_KEYUP:
		switch (event.key.keysym.sym) {
		case SDLK_a:
			cout << "A pressed\n";
			arrow1 = 0;
			break;
		case SDLK_d:
			cout << "D pressed\n";
			arrow1 = 0;
			break;
		default:
			break;
		}
	default:
		break;
	}

}

void Game::update() {

	/*if (arrow3 == 0) {

		arrow1++;
		desRect.x = arrow1;

		arrow3 = (arrow1 == 1016) ? 1 : 0;

	}
	else {

		arrow1--;
		desRect.x = arrow1;

		arrow3 = (arrow1 == 0) ? 0 : 1;
	}*/


	
	

	if (Collision::AABB(desRect, desRect2) && arrow2 == 0) {
		cout << "The object touched the floor\n";
		arrow2++;
	}

}

void Game::render() {

	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, texture, NULL, &desRect);
	SDL_RenderCopy(renderer, floorTex, NULL, &desRect2);
	SDL_RenderPresent(renderer);

}

void Game::clean() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}