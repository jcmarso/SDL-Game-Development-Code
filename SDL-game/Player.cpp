#include "Player.h"
#include "InputHandler.h"

Player::Player() : SDLGameObject()
{
	
}
void Player::load(const LoaderParams* pParams)
{
	SDLGameObject::load(pParams);
}
void Player::draw()
{
	SDLGameObject::draw(); // we now use SDLGameObject
}
void Player::update()
{
	handleInput(); // add our function
	m_currentFrame = int(((SDL_GetTicks() / 100) % m_numFrames));
	SDLGameObject::update();
}
void Player::handleInput()
{
	Vector2D* target = TheInputHandler::Instance()->getMousePosition();
	m_velocity = *target - m_position;
	m_velocity /= 50;
}