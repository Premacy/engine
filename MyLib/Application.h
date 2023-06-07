#ifndef APPLICATION_H
#define APPLICATION_H

#include <glad/gl.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include "Log/Logger.h"
#include "Window.h"

class BaseApplication{
public:

		BaseApplication() : window(nullptr) {};
		~BaseApplication();

		bool init(int w, int h);

		virtual void mainLoop(int program);

		void getWindowSize(int &w, int &h);
private:

	Window *window; //TODO : smart pointers?
};

#endif