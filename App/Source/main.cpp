#include <iostream>
#include "GLFW/glfw3.h"
#include "sokol_gfx.h"

int main(int argc, char const *argv[])
{
    glfwInit();

    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_RESIZABLE, false);
    GLFWwindow* window = glfwCreateWindow(1280, 720, "Title!", nullptr, nullptr);
    glfwMakeContextCurrent(window);

    sg_buffer_desc bufdesc = {};

    while (!glfwWindowShouldClose(window))
    {
        
        glfwPollEvents();
    }
    

    glfwDestroyWindow(window);
    return 0;
}
