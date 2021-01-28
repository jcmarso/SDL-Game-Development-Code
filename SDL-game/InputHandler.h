#ifndef __InputHandler__
#define __InputHandler__

#include "SDL.h"
#include "Vector2D.h"
#include "Game.h"
#include <vector>
#include <iostream>

class InputHandler
{
public:
	void initialiseJoysticks();
	bool joysticksInitialised() {return m_bJoysticksInitialised;}
	static InputHandler* Instance()
	{
		if (s_pInstance == 0)
		{
			s_pInstance = new InputHandler();
		}
		return s_pInstance;
	}
	int xvalue(int joy, int stick);
	int yvalue(int joy, int stick);
	void update();
	void clean();
private:
	InputHandler() {}
	~InputHandler() {}
	static InputHandler* s_pInstance;
	std::vector<SDL_Joystick*> m_joysticks;
	bool m_bJoysticksInitialised = false;
	std::vector<std::pair<Vector2D*, Vector2D*>> m_joystickValues;
	const int m_joystickDeadZone = 10000;
};
typedef InputHandler TheInputHandler;
#endif /* defined(__InputHandler__) */