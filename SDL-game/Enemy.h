#ifndef __Enemy__
#define __Enemy__

#include "SDLGameObject.h"
#include "GameObjectFactory.h"

class Enemy : public SDLGameObject
{
public:
	Enemy();
	virtual void draw();
	virtual void load(const LoaderParams* pParams);
	virtual void update();
	virtual void clean() {};
};
class EnemyCreator : public BaseCreator
{
	GameObject* createGameObject() const
	{
		return new Enemy();
	}
};
#endif /* defined(__Enemy__) */