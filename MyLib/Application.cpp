#include "Application.h"

bool Application::init(int w, int h){
	if (!glfwInit()){
       debug("Error: glfwInit() is not success!");        
        return false;
    }

	window = new Window(w, h);

	window->set_context();

	if(!gladLoadGL(glfwGetProcAddress)){
        debug("Error: gladLoadGL()");
        return false;
    }
    glfwSwapInterval(1);
}