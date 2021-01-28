#ifndef __Enemy__
#define __Enemy__

#include "LoaderParams.h"
#include "TextureManager.h"
#include "SDLGameObject.h"


class Enemy : public SDLGameObject
{
public:
	Enemy(const LoaderParams* pParams);
	virtual void draw();
	virtual void update();
	virtual void clean() {};
};

#endif /* defined(__Enemy__) */