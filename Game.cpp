#include "Game.h"
#include "TextureManager.h"
#include "Collision.h"
#include "Renderer.h"


SDL_Rect desRect{ 500, 592, 64, 64 };
SDL_Rect floorRect{ 0, 656, 1080, 64 };

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen) {

	int flags = fullscreen ? SDL_WINDOW_FULLSCREEN : 0;

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

		renderer = SDL_CreateRenderer(window, -1, 0);

		SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);

		texture = TextureManager::getTex(renderer, "assets/stone.bmp");
		floorTex = TextureManager::getTex(renderer, "assets/floorTes.bmp");
		cubeTex = TextureManager::getTex(renderer, "assets/Cube.bmp");


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
		case SDLK_ESCAPE:
			m_Running = false;
			break;
		case SDLK_a:
			arrow1 = -1;
			break;
		case SDLK_d:
			arrow1 = 1;
			break;
		default:
			break;
		}
	default:
		break;
	}

}

void Game::update() {

	if (desRect.x == -1) {
		desRect.x = 0;
	}
	else if (desRect.x == 1018) {
		desRect.x = 1017;
	}
	else {
		desRect.x += arrow1;
	}


	Renderer::checkCollision(desRect, floorRect);
	if(Renderer::returnFloor() == 5){
		m_Running = false;
		cout << " ------- GAME OVER --------\n";
	}

}

void Game::render() {

	SDL_RenderClear(renderer);
	Renderer::renderAll(renderer);
	SDL_RenderCopy(renderer, texture, NULL, &desRect);
	SDL_RenderCopy(renderer, floorTex, NULL, &floorRect);
	SDL_RenderPresent(renderer);

}

void Game::clean() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}