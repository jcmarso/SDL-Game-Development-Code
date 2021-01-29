#ifndef __PlayState__
#define __PlayState__

#include "MenuState.h"
#include "GameState.h"
#include "TextureManager.h"
#include "Game.h"
#include <iostream>

class PlayState : public GameState
{
public:
	virtual void update();
	virtual void render();
	virtual bool onEnter();
	virtual bool onExit();
	virtual std::string getStateID() const { return s_playID; }
private:
	static const std::string s_playID;
};
#endif /* defined(__PlayState__) */
