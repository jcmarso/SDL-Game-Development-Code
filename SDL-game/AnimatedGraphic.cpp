#include "AnimatedGraphic.h"
#include "SDL.h"

AnimatedGraphic::AnimatedGraphic() : SDLGameObject()
{

}
void AnimatedGraphic::draw()
{
	SDLGameObject::draw();
}
void AnimatedGraphic::load(const LoaderParams* pParams)
{
	SDLGameObject::load(pParams);
}
void AnimatedGraphic::update()
{
	m_currentFrame = int(((SDL_GetTicks() / (1000 / m_animSpeed)) % m_numFrames));
}
