#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void initGL()
{
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 1.0f, 0.0f);
	// yellow and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); //red
    glVertex2f(-0.8f, 0.56f);
	glVertex2f(-0.1f, 0.56f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(-0.8f, 0.0f);


	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.650f, 0.0f);
    glVertex2f(-0.36f, 0.3f);
	glVertex2f(-0.22f, 0.3f);
	glVertex2f(-0.3f, 0.24f);
	glVertex2f(-0.24f, 0.14f);
    glVertex2f(-0.4f, 0.2f);
	glVertex2f(-0.55f, 0.14f);
	glVertex2f(-0.5f, 0.24f);
	glVertex2f(-0.58f, 0.3f);
	glVertex2f(-0.44f, 0.3f);
	glVertex2f(-0.4f, 0.4f);

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.4f, 0.38f);
	glVertex2f(-0.43f, 0.3f);
	glVertex2f(-0.37f, 0.3f);
glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.34f, 0.29f);
	glVertex2f(-0.24f, 0.29f);
	glVertex2f(-0.3f, 0.25f);
glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.31f, 0.23f);
	glVertex2f(-0.26f, 0.16f);
	glVertex2f(-0.38f, 0.2f);
glEnd();

glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.495f, 0.229f);
	glVertex2f(-0.53f, 0.16f);
	glVertex2f(-0.405f, 0.205f);
glEnd();

glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.55f, 0.29f);
	glVertex2f(-0.46f, 0.285f);
	glVertex2f(-0.484f, 0.25f);
glEnd();


glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.45f, 0.29f);
	glVertex2f(-0.36f, 0.29f);
	glVertex2f(-0.32f, 0.24f);
	glVertex2f(-0.39f, 0.21f);
	glVertex2f(-0.48f, 0.24f);
glEnd();




//Greece flag

glBegin(GL_POLYGON);
	glColor3f(0.05f, 0.368f, 0.686f); //Greece blu
    glVertex2f(0.1f, 0.56f);
	glVertex2f(0.1f, 0.01f);
	glVertex2f(0.8f, 0.01f);
	glVertex2f(0.8f, 0.56f);


	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); //box 1 White
    glVertex2f(0.1f, 0.44f);
	glVertex2f(0.4f, 0.44f);
	glVertex2f(0.4f, 0.38f);
	glVertex2f(0.1f, 0.38f);


	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); //box 1 White
    glVertex2f(0.22f, 0.56f);
	glVertex2f(0.28f, 0.56f);
	glVertex2f(0.28f, 0.26f);
	glVertex2f(0.22f, 0.26f);


	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); //box 1 White
    glVertex2f(0.4f, 0.5f);
	glVertex2f(0.8f, 0.5f);
	glVertex2f(0.8f, 0.44f);
	glVertex2f(0.4f, 0.44f);


	glEnd();


		glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); //box 1 White
    glVertex2f(0.4f, 0.38f);
	glVertex2f(0.8f, 0.38f);
	glVertex2f(0.8f, 0.32f);
	glVertex2f(0.4f, 0.32f);


	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); //box 1 White
    glVertex2f(0.1f, 0.26f);
	glVertex2f(0.8f, 0.26f);
	glVertex2f(0.8f, 0.2f);
	glVertex2f(0.1f, 0.2f);


	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); //box 1 White
    glVertex2f(0.1f, 0.14f);
	glVertex2f(0.8f, 0.14f);
	glVertex2f(0.8f, 0.08f);
	glVertex2f(0.1f, 0.08f);


	glEnd();



		glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); //flag norway
    glVertex2f(-0.8f, -0.1f);
	glVertex2f(-0.1f, -0.1f);
	glVertex2f(-0.1f, -0.7f);
	glVertex2f(-0.8f, -0.7f);


	glEnd();


    	glBegin(GL_POLYGON);
	glColor3f(0.729f, 0.047f, 0.184f); //box 1
    glVertex2f(-0.8f, -0.1f);
	glVertex2f(-0.6f, -0.1f);
	glVertex2f(-0.6f, -0.3f);
	glVertex2f(-0.8f, -0.3f);


	glEnd();


    	glBegin(GL_POLYGON);
	glColor3f(0.729f, 0.047f, 0.184f); //box 2
    glVertex2f(-0.4f, -0.1f);
	glVertex2f(-0.1f, -0.1f);
	glVertex2f(-0.1f, -0.3f);
	glVertex2f(-0.4f, -0.3f);


	glEnd();



    	glBegin(GL_POLYGON);
	glColor3f(0.729f, 0.047f, 0.184f); //box 3
    glVertex2f(-0.4f, -0.5f);
	glVertex2f(-0.1f, -0.5f);
	glVertex2f(-0.1f, -0.7f);
	glVertex2f(-0.4f, -0.7f);


	glEnd();




    	glBegin(GL_POLYGON);
	glColor3f(0.729f, 0.047f, 0.184f); //box 4
    glVertex2f(-0.8f, -0.5f);
	glVertex2f(-0.6f, -0.5f);
	glVertex2f(-0.6f, -0.7f);
	glVertex2f(-0.8f, -0.7f);


	glEnd();

		glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.125f, 0.356f); //blue line 1
    glVertex2f(-0.54f, -0.1f);
	glVertex2f(-0.46f, -0.1f);
	glVertex2f(-0.46f, -0.7f);
	glVertex2f(-0.54f, -0.7f);


	glEnd();


			glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.125f, 0.356f); //blue line 2
    glVertex2f(-0.8f, -0.34);
	glVertex2f(-0.8f, -0.44f);
	glVertex2f(-0.1f, -0.44f);
	glVertex2f(-0.1f, -0.34f);


	glEnd();


			glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.2f, 0.250f); //flag Ghana
    glVertex2f(0.1f, -0.1);
	glVertex2f(0.8f, -0.1f);
	glVertex2f(0.8f, -0.7f);
	glVertex2f(0.1f, -0.7f);


	glEnd();


			glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.8f, 0.0f); //yellow box 1
    glVertex2f(0.1f, -0.3);
	glVertex2f(0.8f, -0.3f);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.1f, -0.5f);


	glEnd();



			glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //star
    glVertex2f(0.435f, -0.368);
	glVertex2f(0.54f, -0.368f);
	glVertex2f(0.46f, -0.417f);
	glVertex2f(0.5f, -0.5f);
	 glVertex2f(0.4f, -0.44);
	glVertex2f(0.3f, -0.5f);
	glVertex2f(0.34f, -0.417f);
	glVertex2f(0.26f, -0.368f);
	glVertex2f(0.368f, -0.368f);
	glVertex2f(0.4f, -0.3f);


	glEnd();

			glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.6f, 0.267f); //yellow box 1
    glVertex2f(0.1f, -0.5f);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.8f, -0.7f);
	glVertex2f(0.1f, -0.7f);


	glEnd();


	glFlush();  // Render now


	glLineWidth(2);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 0.255f, 1.0f); // Red
	glVertex2f(-1.0f, 0.0f);    // x, y
	glVertex2f(1.0f, 0.0f);    // x, y
	glEnd();
glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 0.255f, 1.0f); // Red
	glVertex2f(0.0f, 1.0f);    // x, y
	glVertex2f(0.0f, -1.0f);    // x, y
	glEnd();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutInitWindowPosition(80, 50);
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
