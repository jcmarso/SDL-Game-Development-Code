#ifndef __Player__
#define __Player__

#include "SDLGameObject.h"
#include "GameObjectFactory.h"

class Player : public SDLGameObject
{
private:
	void handleInput();
public:
	Player();
	void load(const LoaderParams* pParams);
	virtual void draw();
	virtual void update();
	virtual void clean(){};
};
class PlayerCreator : public BaseCreator
{
	GameObject* createGameObject() const
	{
		return new Player();
	}
};
#endif /* defined(__Player__) */