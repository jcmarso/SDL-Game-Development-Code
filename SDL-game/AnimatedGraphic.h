#ifndef __AnimatedGraphic__
#define __AnimatedGraphic__

#include "SDLGameObject.h"
#include "LoaderParams.h"
#include "GameObjectFactory.h"

class AnimatedGraphic : public SDLGameObject
{
public:
	AnimatedGraphic();
	virtual void draw();
	virtual void load(const LoaderParams* pParams);
	virtual void update();
	virtual void clean() {};

private:
	int m_animSpeed;
};
class AnimatedGraphicCreator : public BaseCreator
{
	GameObject* createGameObject() const
	{
		return new AnimatedGraphic();
	}
};
#endif /* defined(__AnimatedGraphic__) */