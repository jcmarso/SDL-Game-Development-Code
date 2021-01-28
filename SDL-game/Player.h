#ifndef __Player__
#define __Player__

#include "LoaderParams.h"
#include "TextureManager.h"
#include "SDLGameObject.h"
#include "InputHandler.h"

class Player : public SDLGameObject
{
private:
	void handleInput();
public:
	Player(const LoaderParams* pParams);
	virtual void draw();
	virtual void update();
	virtual void clean(){};
};

#endif /* defined(__Player__) */