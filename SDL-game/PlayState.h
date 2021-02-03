#ifndef __PlayState__
#define __PlayState__

#include "SDLGameObject.h"
#include "GameState.h"
#include "InputHandler.h"
#include "Game.h"
#include <vector>
#include <string>

class PlayState : public GameState
{
public:
	virtual void update();
	virtual void render();
	virtual bool onEnter();
	virtual bool onExit();
	virtual std::string getStateID() const { return s_playID; }
	bool checkCollision(SDLGameObject* p1, SDLGameObject* p2);
private:
	static const std::string s_playID;
	std::vector<GameObject*> m_gameObjects;
};
#endif /* defined(__PlayState__) */
