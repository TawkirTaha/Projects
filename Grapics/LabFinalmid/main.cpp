
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

void renderBitmapString(float x, float y, float z, void *font, char *string) {

   char *c;

   glRasterPos3f(x, y,z);

   for (c=string; *c != '\0'; c++)

   {

      glutBitmapCharacter(font, *c);

   }

}

void drawStar(float cx, float cy, float r, int num_points, float rotation) {

   float angle = 3.1415926f * 2.0f / num_points;

   float half_angle = angle / 2.0f;

  glBegin(GL_TRIANGLE_FAN);

   glVertex2f(cx, cy); // Center of the star

   for (int i = 0; i <= num_points; i++) {

       float x = cx + r * cosf(i * angle + rotation);

       float y = cy + r * sinf(i * angle + rotation);

       glVertex2f(x, y);

       x = cx + r * 0.5f * cosf(i * angle + half_angle + rotation);

       y = cy + r * 0.5f * sinf(i * angle + half_angle + rotation);

       glVertex2f(x, y);

   }

   glEnd();

}

void display() {

   glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to white

  glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

   glLineWidth(2);

               // Draw a Red 1x1 Square centered at origin

               glBegin(GL_LINES);              // Each set of 4 vertices form a quad

               glColor3f(0.0f, 0.0f, 0.0f); // black

               glVertex2f(-1.0f, 0.0f);    // x, y

               glVertex2f(1.0f, 0.0f);    // x, y

   glVertex2f(0.0f, -1.0f);    // x, y

               glVertex2f(0.0f, 1.0f);    // x, y

               glEnd();

    glFlush(); // Render now

//Red

   glBegin(GL_QUADS);

  glColor3f(1.0f,0.0f,0.0f);

  glVertex2f(0.125f,0.125f);

  glVertex2f(0.125f,0.625f);

  glVertex2f(0.3f,0.625f);

  glVertex2f(0.3f,0.125f);

    glEnd();

//red

   glBegin(GL_QUADS);

  glColor3f(1.0f,0.0f,0.0f);

  glVertex2f(0.7f,0.125f);

  glVertex2f(0.875f,0.125f);

  glVertex2f(0.875f,0.625f);

  glVertex2f(0.7f,0.625f);

  glEnd();

//red

  glBegin(GL_POLYGON);            // These vertices form a closed polygon

               glColor3f(1.0f, 0.0f, 0.0f);

               glVertex2f(0.575f, 0.275f);

               glVertex2f(0.575f, 0.25f);

               glVertex2f(0.5f, 0.275f);

               glVertex2f(0.425f, 0.25f);

               glVertex2f(0.425f, 0.275f);

               glVertex2f(0.325f, 0.375f);

               glVertex2f(0.675f, 0.375f);

               glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon

               glColor3f(1.0f, 0.0f, 0.0f);

               glVertex2f(0.375f, 0.375f);

               glVertex2f(0.325f, 0.45f);

               glVertex2f(0.375f, 0.425f);

               glVertex2f(0.375f, 0.475f);

               glVertex2f(0.475f, 0.375f);

               glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon

               glColor3f(1.0f, 0.0f, 0.0f);

               glVertex2f(0.45f, 0.4f);

   glVertex2f(0.425f, 0.5f);

               glVertex2f(0.45f, 0.475f);

               glVertex2f(0.5f, 0.55f);

               glVertex2f(0.55f, 0.475f);

               glVertex2f(0.575f, 0.5f);

               glVertex2f(0.55f, 0.4f);

               glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon

               glColor3f(1.0f, 0.0f, 0.0f);

               glVertex2f(0.525f, 0.375f);

               glVertex2f(0.625f, 0.475f);

               glVertex2f(0.625f, 0.425f);

               glVertex2f(0.675f, 0.45f);

               glVertex2f(0.625f, 0.375f);

               glVertex2f(0.55f, 0.4f);

               glEnd();

               //red

glBegin(GL_QUADS);

  glColor3f(1.0f,0.0f,0.0f);

   glVertex2f(0.55f, 0.4f);

               glVertex2f(0.525f, 0.375f);

               glVertex2f(0.475f, 0.375f);

               glVertex2f(0.45f, 0.4f);

               glEnd();;

glLineWidth(2);

               // Draw a Red 1x1 Square centered at origin

               glBegin(GL_LINES);              // Each set of 4 vertices form a quad

  glColor3f(1.0f,0.0f,0.0f);

   glVertex2f(0.5f, 0.2f);

               glVertex2f(0.5f, 0.275f);    // x, y

               glEnd();

    glFlush(); // Render now

glBegin(GL_POLYGON);            // These vertices form a closed polygon

               glColor3f(0.0f, 0.0f, 1.0f);

               glVertex2f(-0.5f, 0.325f);

               glVertex2f(-0.5f, 0.625f);

               glVertex2f(-0.125f, 0.625f);

               glVertex2f(-0.125f, 0.125f);

               glVertex2f(-0.9f, 0.125f);

   glVertex2f(-0.9f, 0.325f);

               glEnd();

glColor3ub(255, 255, 255);

drawStar(-0.3, 0.55, 0.04, 5, 3.1415926f / 2);

glColor3f(1.0f,0.0f,0.0f);

drawStar(-0.3, 0.55, 0.03, 5, 3.1415926f / 2);

glColor3ub(255, 255, 255);

drawStar(-0.2, 0.475, 0.03, 5, 3.1415926f / 2);

glColor3f(1.0f,0.0f,0.0f);

drawStar(-0.2, 0.475, 0.02, 5, 3.1415926f / 2);

glColor3ub(255, 255, 255);

drawStar(-0.4, 0.4, 0.04, 5, 3.1415926f / 2);

glColor3f(1.0f,0.0f,0.0f);

drawStar(-0.4, 0.4, 0.03, 5, 3.1415926f / 2);

glColor3ub(255, 255, 255);

drawStar(-0.3, 0.25, 0.04, 5, 3.1415926f / 2);

glColor3f(1.0f,0.0f,0.0f);

drawStar(-0.3, 0.25, 0.03, 5, 3.1415926f / 2);

glBegin(GL_TRIANGLES);

               glColor3f(0.0f, 0.0f, 1.0f);

               glVertex2f(-0.65f, 0.625f);

               glVertex2f(-0.55f, 0.625f);

               glVertex2f(-0.65f, 0.525f);

               glEnd();

glBegin(GL_TRIANGLES);

               glColor3f(0.0f, 0.0f, 1.0f);

               glVertex2f(-0.5f, 0.6f);

               glVertex2f(-0.5f, 0.525f);

               glVertex2f(-0.575f, 0.525f);

               glEnd();

glBegin(GL_TRIANGLES);

               glColor3f(0.0f, 0.0f, 1.0f);

               glVertex2f(-0.5f, 0.425f);

               glVertex2f(-0.5f, 0.35f);

               glVertex2f(-0.575f, 0.425f);

               glEnd();

glBegin(GL_TRIANGLES);

               glColor3f(0.0f, 0.0f, 1.0f);

               glVertex2f(-0.65f, 0.425f);

               glVertex2f(-0.55f, 0.325f);

               glVertex2f(-0.65f, 0.325f);

               glEnd();

glBegin(GL_TRIANGLES);

               glColor3f(0.0f, 0.0f, 1.0f);

               glVertex2f(-0.5f, 0.425f);

               glVertex2f(-0.5f, 0.35f);

               glVertex2f(-0.575f, 0.425f);

               glEnd();

glBegin(GL_TRIANGLES);

               glColor3f(0.0f, 0.0f, 1.0f);

               glVertex2f(-0.75f, 0.625f);

               glVertex2f(-0.85f, 0.625f);

               glVertex2f(-0.75f, 0.525f);

               glEnd();

glBegin(GL_QUADS);

               glColor3f(1.0f, 0.0f, 0.0f);

               glVertex2f(-0.525f, 0.625f);

               glVertex2f(-0.5f, 0.625f);

               glVertex2f(-0.6f, 0.525f);

               glVertex2f(-0.625f, 0.525f);

               glEnd();

glBegin(GL_TRIANGLES);

               glColor3f(0.0f, 0.0f, 1.0f);

               glVertex2f(-0.5f, 0.425f);

               glVertex2f(-0.5f, 0.35f);

               glVertex2f(-0.575f, 0.425f);

               glEnd();

glBegin(GL_TRIANGLES);

               glColor3f(0.0f, 0.0f, 1.0f);

               glVertex2f(-0.9f, 0.6f);

               glVertex2f(-0.9f, 0.525f);

               glVertex2f(-0.825f, 0.525f);

               glEnd();

glBegin(GL_TRIANGLES);

               glColor3f(0.0f, 0.0f, 1.0f);

               glVertex2f(-0.9f, 0.425f);

               glVertex2f(-0.9f, 0.35f);

               glVertex2f(-0.825f, 0.425f);

               glEnd();

glBegin(GL_TRIANGLES);

               glColor3f(0.0f, 0.0f, 1.0f);

               glVertex2f(-0.75f, 0.325f);

               glVertex2f(-0.85f, 0.325f);

               glVertex2f(-0.75f, 0.425f);

               glEnd();

glBegin(GL_QUADS);

               glColor3f(1.0f, 0.0f, 0.0f);

               glVertex2f(-0.9f, 0.625f);

               glVertex2f(-0.875f, 0.625f);

               glVertex2f(-0.775f, 0.525f);

               glVertex2f(-0.8f, 0.525f);

               glEnd();

glBegin(GL_QUADS);

               glColor3f(1.0f, 0.0f, 0.0f);

               glVertex2f(-0.9f, 0.325f);

               glVertex2f(-0.875f, 0.325f);

               glVertex2f(-0.775f, 0.425f);

               glVertex2f(-0.8f, 0.425f);

               glEnd();

glBegin(GL_QUADS);

               glColor3f(1.0f, 0.0f, 0.0f);

               glVertex2f(-0.5f, 0.325f);

               glVertex2f(-0.525f, 0.325f);

               glVertex2f(-0.625f, 0.425f);

               glVertex2f(-0.6f, 0.425f);

               glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon

               glColor3f(0.0f, 0.0f, 1.0f);

               glVertex2f(-0.675f, 0.5f);

               glVertex2f(-0.5f, 0.5f);

               glVertex2f(-0.5f, 0.45f);

               glVertex2f(-0.675f, 0.45f);

               glVertex2f(-0.675f, 0.325f);

  glVertex2f(-0.725f, 0.325f);

               glVertex2f(-0.725f, 0.45f);

               glVertex2f(-0.9f, 0.45f);

               glVertex2f(-0.9f, 0.5f);

               glEnd();

glBegin(GL_QUADS);

glColor3f(0.0f, 0.0f, 1.0f);

  glVertex2f(-0.725f, 0.5f);

  glVertex2f(-0.725f, 0.625f);

  glVertex2f(-0.675f, 0.625f);

  glVertex2f(-0.675f, 0.5f);

               glEnd();

  //FLAG 2 (Samoa)

glColor3ub(213, 15, 15);

  glBegin(GL_POLYGON);

  glVertex2f(0.125,-0.125);

glVertex2f(0.875,-0.125);

glVertex2f(0.875,-0.625);

glVertex2f(0.125,-0.625);

  glEnd();

glColor3ub(2, 53, 154);

  glBegin(GL_POLYGON);

  glVertex2f(0.125,-0.125);

glVertex2f(0.55,-0.125);

glVertex2f(0.55,-0.4);

glVertex2f(0.125,-0.4);

  glEnd();

glColor3ub(255, 255, 255);

drawStar(0.275, -0.175, 0.03, 5, 3.1415926f / 2);

glColor3ub(255, 255, 255);

drawStar(0.2, -0.25, 0.03, 5, 3.1415926f / 2);

glColor3ub(255, 255, 255);

drawStar(0.4, -0.225, 0.03, 5, 3.1415926f / 2);

glColor3ub(255, 255, 255);

drawStar(0.325, -0.25, 0.02, 5, 3.1415926f / 2);

glColor3ub(255, 255, 255);

drawStar(0.275, -0.3125, 0.04, 5, 3.1415926f / 2);

//(European Union)

// Draw blue background rectangle

   glColor3ub(0, 51, 160); // Blue color

  glBegin(GL_POLYGON);

   glVertex2f(-0.9f, -0.1f); // Top-left

   glVertex2f(-0.9f, -0.8f); // Top-right

   glVertex2f(-0.1f, -0.8f); // Bottom-right

   glVertex2f(-0.1f, -0.1f); // Bottom-left

   glEnd();

   // Draw 12 yellow stars in a circle pattern

   glColor3ub(255, 255, 0); // Yellow color

   float starRadius = 0.025f; // Radius of the stars

   float circleRadius = 0.19f; // Radius of the circle that contains the stars

   float cx = -0.5f; // X center of the circle

   float cy = -0.45f; // Y center of the circle

   int numStars = 12; // Number of stars

   float angleIncrement = 2.0f * M_PI / numStars; // Angle increment between stars

   for (int i = 0; i < numStars; ++i) {

       float angle = i * angleIncrement;

       float starX = cx + circleRadius * cos(angle); // X coordinate of the star

       float starY = cy + circleRadius * sin(angle); // Y coordinate of the star

       // Draw each star as a polygon with 10 points

      glBegin(GL_POLYGON);

       for (int j = 0; j < 10; ++j) {

           float innerRadius = (j % 2 == 0) ? starRadius * 0.6f : starRadius; // Alternate between smaller and larger points

           float starAngle = j * 2.0f * M_PI / 10.0f; // Angle of each point

           float px = starX + innerRadius * cos(starAngle); // X coordinate of the point

           float py = starY + innerRadius * sin(starAngle); // Y coordinate of the point

          glVertex2f(px, py); // Vertex position

       }

       glEnd();

   }

       glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

  glutInit(&argc, argv);

  glutInitWindowSize(640, 480); // Set the window's initial width & height

  glutInitWindowPosition(80, 50); // Set the window's initial position according to the monitor

  glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title

  glutDisplayFunc(display); // Register display callback handler for window re-paint

   glutMainLoop(); // Enter the event-processing loop

   return 0;

}
