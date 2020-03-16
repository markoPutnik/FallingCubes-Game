#pragma once
#include <SDL.h>

class Collision {
public:



	static bool AABB(const SDL_Rect& recA, const SDL_Rect& recB) {
		if (recA.x + recA.w >= recB.x &&
			recB.x + recB.w >= recA.x &&
			recA.y + recA.h >= recB.y &&
			recB.y + recB.h >= recA.y) {
			return true;
		}
		else {
			return false;
		}
	}

	static void changeRect(SDL_Rect& rec) {

		rec.x = rand() % 1018;
		rec.y = -100;

	}

};
