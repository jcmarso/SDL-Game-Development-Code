#ifndef __AnimatedGraphic__
#define __AnimatedGraphic__

#include "SDL.h"
#include "SDLGameObject.h"
#include "LoaderParams.h"


class AnimatedGraphic : public SDLGameObject
{
public:
	AnimatedGraphic(const LoaderParams* pParams, int animSpeed);
	void update();

private:
	int m_animSpeed;
};



#endif /* defined(__AnimatedGraphic__) */
