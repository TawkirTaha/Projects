#include <windows.h> // for MS Windows
#include <GL/glut.h>

// Function to draw the Norwegian flag in the first quadrant
void drawNorwayFlag() {
    // Draw the red background of the flag
    glBegin(GL_QUADS);
    glColor3f(0.86f, 0.12f, 0.14f); // Red color
    glVertex2f(0.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glEnd();

    // Draw the white cross
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f); // White color
    // Vertical part of the white cross
    glVertex2f(0.35f, 1.0f);
    glVertex2f(0.45f, 1.0f);
    glVertex2f(0.45f, 0.0f);
    glVertex2f(0.35f, 0.0f);
    // Horizontal part of the white cross
    glVertex2f(0.0f, 0.55f);
    glVertex2f(1.0f, 0.55f);
    glVertex2f(1.0f, 0.45f);
    glVertex2f(0.0f, 0.45f);
    glEnd();

    // Draw the blue cross
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.18f, 0.65f); // Blue color
    // Vertical part of the blue cross
    glVertex2f(0.375f, 1.0f);
    glVertex2f(0.425f, 1.0f);
    glVertex2f(0.425f, 0.0f);
    glVertex2f(0.375f, 0.0f);
    // Horizontal part of the blue cross
    glVertex2f(0.0f, 0.525f);
    glVertex2f(1.0f, 0.525f);
    glVertex2f(1.0f, 0.475f);
    glVertex2f(0.0f, 0.475f);
    glEnd();
}

// Function to draw the Greek flag in the second quadrant
void drawGreeceFlag() {
    // Draw blue and white stripes
    for (int i = 0; i < 9; ++i) {
        if (i % 2 == 0) glColor3f(0.0f, 0.18f, 0.65f); // Blue color
        else glColor3f(1.0f, 1.0f, 1.0f); // White color

        glBegin(GL_QUADS);
        glVertex2f(-1.0f, 0.75f - i * 0.25f);
        glVertex2f(0.0f, 0.75f - i * 0.25f);
        glVertex2f(0.0f, 0.5f - i * 0.25f);
        glVertex2f(-1.0f, 0.5f - i * 0.25f);
        glEnd();
    }

    // Draw the blue square
    glColor3f(0.0f, 0.18f, 0.65f); // Blue color
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-0.5f, 1.0f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-1.0f, 0.5f);
    glEnd();

    // Draw the white cross
    glColor3f(1.0f, 1.0f, 1.0f); // White color
    glBegin(GL_QUADS);
    // Horizontal part of the cross
    glVertex2f(-0.75f, 1.0f);
    glVertex2f(-0.65f, 1.0f);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.75f, 0.5f);
    // Vertical part of the cross
    glVertex2f(-1.0f, 0.75f);
    glVertex2f(-0.5f, 0.75f);
    glVertex2f(-0.5f, 0.65f);
    glVertex2f(-1.0f, 0.65f);
    glEnd();
}

// Function to draw the Ghanaian flag in the third quadrant
void drawGhanaFlag() {
    // Draw the red stripe
    glBegin(GL_QUADS);
    glColor3f(0.84f, 0.15f, 0.17f); // Red color
    glVertex2f(0.0f, -0.5f);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glEnd();

    // Draw the yellow stripe
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.77f, 0.0f); // Yellow color
    glVertex2f(0.0f, -0.5f);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(0.0f, -1.0f);
    glEnd();

    // Draw the green stripe
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f); // Green color
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(0.0f, 0.5f);
    glEnd();

    // Draw the black star
    glColor3f(0.0f, 0.0f, 0.0f); // Black color
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(-0.55f, -0.2f);
    glVertex2f(-0.45f, -0.2f);

    glVertex2f(-0.55f, -0.2f);
    glVertex2f(-0.6f, -0.3f);
    glVertex2f(-0.4f, -0.3f);

    glVertex2f(-0.45f, -0.2f);
    glVertex2f(-0.4f, -0.3f);
    glVertex2f(-0.6f, -0.3f);

    glVertex2f(-0.5f, -0.3f);
    glVertex2f(-0.45f, -0.4f);
    glVertex2f(-0.55f, -0.4f);

    glVertex2f(-0.5f, -0.3f);
    glVertex2f(-0.55f, -0.4f);
    glVertex2f(-0.45f, -0.4f);
    glEnd();
}

// Function to draw the Moroccan flag in the fourth quadrant
void drawMoroccoFlag() {
    // Draw the red background of the flag
    glBegin(GL_QUADS);
    glColor3f(0.86f, 0.12f, 0.14f); // Red color
    glVertex2f(0.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(0.0f, -1.0f);
    glEnd();

    // Draw the green star
    glColor3f(0.0f, 0.6f, 0.2f); // Green color
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.5f, -0.3f);
    glVertex2f(0.4f, -0.5f);
    glVertex2f(0.6f, -0.5f);
    glVertex2f(0.4f, -0.7f);
    glVertex2f(0.5f, -0.9f);
    glVertex2f(0.6f, -0.7f);
    glVertex2f(0.6f, -0.5f);
    glEnd();
}

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glPointSize(9.0);
    // Draw each flag in its respective quadrant
    drawNorwayFlag();
    drawGreeceFlag();
    drawGhanaFlag();
    drawMoroccoFlag();

    glFlush(); // Render now
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);                          // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);    // Set up a basic display buffer (only single buffered for now)
    glutInitWindowSize(640, 480);                   // Set the width and height of the window
    glutInitWindowPosition(80, 50);                 // Set the position of the window
    glutCreateWindow("Flags of the World");         // Set the title for the window
    glutDisplayFunc(display);                       // Tell GLUT to use the method "display" for rendering
    glutMainLoop();                                 // Enter GLUT's main loop
    return 0;
}
