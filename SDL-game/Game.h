#ifndef __Game__
#define __Game__

#include <SDL.h>
#include "GameObject.h"
#include "GameStateMachine.h"
#include <vector>

class Game
{
public:
	bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void render();
	void update();
	void handleEvents();
	void clean();
	void quit() { m_bRunning = false; }
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
	GameStateMachine* getStateMachine() { return m_pGameStateMachine; }
	int getGameWidth() const
	{
		return m_gameWidth;
	}
	int getGameHeight() const
	{
		return m_gameHeight;
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
	int m_gameWidth;
	int m_gameHeight;
};
typedef Game TheGame;
#endif /* defined(__Game__) */