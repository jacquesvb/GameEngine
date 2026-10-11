#include <GLFW/glfw3.h>
#include <GL/gl.h>
#include <iostream>

int main()
{
    if (!glfwInit())
    {
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(1280, 720, "GameDevelopmentProject", nullptr, nullptr);

    if (window == nullptr)
    {
        std::cout << "Error creating window" << std::endl;
        glfwTerminate();
        return -1;
    }

    // glfwSetWindowPos(window, 2000, 150);

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}