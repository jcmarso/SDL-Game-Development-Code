#ifndef __SDLGameObject__
#define __SDLGameObject__

#include <SDL.h>
#include <string>
#include "GameObject.h"
#include "Vector2D.h"

class SDLGameObject : public GameObject
{
public:
	SDLGameObject();
	virtual void draw();
	virtual void update();
	virtual void load(const LoaderParams* pParams);
	virtual void clean() {};

	Vector2D& getPosition() { return m_position; }
	int getWidth() { return m_width; }
	int getHeight() { return m_height; }

protected:
	Vector2D m_position;
	Vector2D m_velocity;
	Vector2D m_acceleration;
	int m_width;
	int m_height;
	std::string m_textureID;
	int m_currentRow;
	int m_currentFrame;
	int m_numFrames;

};
#endif /* defined(__SDLGameObject__) */
