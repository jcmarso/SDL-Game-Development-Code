#ifndef __MenuState__
#define __MenuState__

#include "GameState.h"
#include "TextureManager.h"
#include "GameObject.h"
#include "MenuButton.h"
#include "Game.h"
#include <iostream>
#include <vector>

class MenuState : public GameState
{
public:
	virtual void update();
	virtual void render();
	virtual bool onEnter();
	virtual bool onExit();
	virtual std::string getStateID() const { return s_menuID; }
private:
	static const std::string s_menuID;
	std::vector<GameObject*> m_gameObjects;
	// call back functions for menu items
	static void s_menuToPlay();
	static void s_exitFromMenu();
};
#endif /* defined(__MenuState__) */