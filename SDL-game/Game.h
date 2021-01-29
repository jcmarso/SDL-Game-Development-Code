#ifndef __Game__
#define __Game__

#include <SDL.h>
#include <vector>
#include "SDLGameObject.h"
#include "TextureManager.h"
#include "GameObject.h"
#include "Player.h"
#include "Enemy.h"
#include "LoaderParams.h"
#include "InputHandler.h"
#include "MenuState.h"
#include "GameState.h"
#include "PlayState.h"
#include "GameStateMachine.h"

class Game
{
public:
	bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void render();
	void update();
	void handleEvents();
	void clean();
	void quit() {}

	bool running() { return m_bRunning; }
	SDL_Renderer* getRenderer() const { return m_pRenderer; }
	static Game* Instance()
	{
		if (s_pInstance == 0)
		{
			s_pInstance = new Game();
			return s_pInstance;
		}
		return s_pInstance;
	}
private:
	Game() {}
	~Game() {}
	SDL_Window* m_pWindow;
	SDL_Renderer* m_pRenderer;
	SDL_Texture* m_pTexture;
	int m_currentFrame;
	bool m_bRunning = false;
	std::vector<GameObject*> m_gameObjects;
	static Game* s_pInstance;
	GameStateMachine* m_pGameStateMachine;
};
typedef Game TheGame;
#endif /* defined(__Game__) */