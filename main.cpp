#include "Game.h"

Game* game;

auto main(int argc, char* argv[]) -> int {


	const int FPS = 200;
	const int frameDelay = 1000 / FPS;

	Uint32 frameStart;
	int frameTime;

	
	game = new Game();
	game->init("FALLING CUBES", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1080, 720, 0);

	while (game->isRunning()) {

		frameStart = SDL_GetTicks();

		game->handleEvents();
		game->update();
		game->render();

		frameTime = SDL_GetTicks() - frameStart;

		if (frameDelay > frameTime)
			SDL_Delay(frameDelay - frameTime);

	}

	game->clean();

	system("pause");
	return 0;
}