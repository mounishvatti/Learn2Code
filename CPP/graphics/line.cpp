#include <cmath>
#include <iostream>
#include <GL/glut.h>
#include <GL/glu.h>

void init() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void DDA(int x1, int y1, int x2, int y2) {
    // Calculate dx and dy
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Calculate steps
    int steps = std::abs(dx) > std::abs(dy) ? std::abs(dx) : std::abs(dy);

    // Calculate increment in x and y for each step
    float xIncrement = static_cast<float>(dx) / static_cast<float>(steps);
    float yIncrement = static_cast<float>(dy) / static_cast<float>(steps);

    // Set the initial points
    float x = static_cast<float>(x1);
    float y = static_cast<float>(y1);

    // Start drawing
    glBegin(GL_POINTS);
    for (int i = 0; i <= steps; i++) {
        glVertex2i(round(x), round(y));
        x += xIncrement;
        y += yIncrement;
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0); // Set the color to red
    DDA(50, 50, 150, 100);    // Draw the line using DDA algorithm
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Line Drawing using DDA Algorithm");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}