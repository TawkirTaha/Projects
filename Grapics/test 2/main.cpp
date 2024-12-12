#include <GL/glut.h>
#include <math.h>

void drawSky() {

    glBegin(GL_POLYGON);
    glColor3ub(135, 206, 250); // Light blue color for the sky
    glVertex2f(-30.0f, 0.0f);
    glVertex2f(30.0f, 0.0f);
    glVertex2f(30.0f, 35.0f);
    glVertex2f(-30.0f, 35.0f);
    glEnd();
}

void drawSun() {
    // Draw the sun
    glColor3ub(255, 255, 0); // Yellow color for the sun
    float radius = 3.0f;
    float centerX = -20.0f; // X position of the sun
    float centerY = 25.0f; // Y position of the sun
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX, centerY); // Center of the sun
    for (int i = 0; i <= 360; i += 5) {
        float theta = i * 3.14159 / 180;
        float x = centerX + radius * cos(theta);
        float y = centerY + radius * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();
}

void cloudCircle(float r,float x,float y) {
    // Draw the sun
    glColor3ub(255,255,255); // Yellow color for the sun
    float radius = r;
    float centerX = x; // X position of the sun
    float centerY = y; // Y position of the sun
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX, centerY); // Center of the sun
    for (int i = 0; i <= 360; i += 5) {
        float theta = i * 3.14159 / 180;
        float x = centerX + radius * cos(theta);
        float y = centerY + radius * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();
}

void cloud()
{
   cloudCircle(2,-5.0,25.0);
    cloudCircle(2,-2.5,25.0);
     cloudCircle(2,-3.75,27.0);

      cloudCircle(2,-15.0,30.0);
    cloudCircle(2,-12.5,30.0);
     cloudCircle(2,-13.75,32.0);



}
void drawBird(float x, float y) {
    glColor3ub(0, 0, 0); // Black color for the birds
    glBegin(GL_LINE_STRIP);
    glVertex2f(x, y);
    glVertex2f(x + 1.0f, y + 0.5f); // Right wing up
    glVertex2f(x + 2.0f, y);        // V shape middle
    glVertex2f(x + 3.0f, y + 0.5f); // Left wing up
    glVertex2f(x + 4.0f, y);        // Left wing down
    glEnd();
}

void drawBirds() {

    drawBird(-10.0f, 30.0f);
    drawBird(-5.0f, 25.0f);
    drawBird(-8.0f, 22.0f);


}




void warhouse1ground()
{

    glColor3ub(128, 0, 0);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(10.0f, 0.0f);
    glVertex2f(30.0f, 0.0f);
    glVertex2f(30.0f, 30.0f);
    glVertex2f(10.0f, 30.0f);
    glEnd();

}
void warhouse1roof()
{
    glColor3ub(128, 0, 0);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(10.0f, 30.0f);
    glVertex2f(20.0f, 35.0f);
    glVertex2f(30.0f, 30.0f);

    glEnd();

}
void warhouse1win1()
{
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(24.0f, 4.0f);
    glVertex2f(26.0f, 4.0f);
    glVertex2f(26.0f, 6.0f);
    glVertex2f(24.0f, 6.0f);

    glEnd();

}
void warhouse1win2()
{
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(24.0f, 14.0f);
    glVertex2f(26.0f, 14.0f);
    glVertex2f(26.0f, 16.0f);
    glVertex2f(24.0f, 16.0f);

    glEnd();

}
void warhouse1win3()
{
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(24.0f, 24.0f);
    glVertex2f(26.0f, 24.0f);
    glVertex2f(26.0f, 26.0f);
    glVertex2f(24.0f, 26.0f);

    glEnd();

}
void warhouse1win6()
{
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(14.0f, 4.0f);
    glVertex2f(16.0f, 4.0f);
    glVertex2f(16.0f, 6.0f);
    glVertex2f(14.0f, 6.0f);

    glEnd();

}
void warhouse1win5()
{
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(14.0f, 14.0f);
    glVertex2f(16.0f, 14.0f);
    glVertex2f(16.0f, 16.0f);
    glVertex2f(14.0f, 16.0f);

    glEnd();

}
void warhouse1win4()
{
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(14.0f, 24.0f);
    glVertex2f(16.0f, 24.0f);
    glVertex2f(16.0f, 26.0f);
    glVertex2f(14.0f, 26.0f);

    glEnd();

}
void warhouse1pol()
{
    glColor3ub(169, 169, 169 );
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(28.0f, 31.0f);
    glVertex2f(30.0f, 30.0f);
    glVertex2f(30.0f, 35.0f);
    glVertex2f(28.0f, 35.0f);

    glEnd();

}



void warhouse2()
{

    glColor3ub(128, 0, 0);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-30.0f, 0.0f);
    glVertex2f(10.0f, 0.0f);
    glVertex2f(10.0f, 20.0f);
    glVertex2f(-30.0f, 20.0f);
    glEnd();

}
void warhouse2win1()
{
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(4.0f, 9.0f);
    glVertex2f(6.0f, 9.0f);
    glVertex2f(6.0f, 11.0f);
    glVertex2f(4.0f, 11.0f);

    glEnd();

}
void warhouse2win2()
{
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-4.0f, 9.0f);
    glVertex2f(-6.0f, 9.0f);
    glVertex2f(-6.0f, 11.0f);
    glVertex2f(-4.0f, 11.0f);

    glEnd();

}
void warhouse2win3()
{
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-14.0f, 9.0f);
    glVertex2f(-16.0f, 9.0f);
    glVertex2f(-16.0f, 11.0f);
    glVertex2f(-14.0f, 11.0f);

    glEnd();

}
void warhouse2win4()
{
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-24.0f, 9.0f);
    glVertex2f(-26.0f, 9.0f);
    glVertex2f(-26.0f, 11.0f);
    glVertex2f(-24.0f, 11.0f);

    glEnd();

}
void warhouse2gate()
{
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-15.0f, 0.0f);
    glVertex2f(-5.0f, 0.0f);
    glVertex2f(-5.0f, 5.0f);
    glVertex2f(-15.0f, 5.0f);

    glEnd();
}
void pol2()
{
        glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(10.0f, 20.0f);
    glVertex2f(10.0f, 33.0f);
    glVertex2f(8.0f, 33.0f);
    glVertex2f(8.0f, 20.0f);

    glEnd();

}


void b1()
{
    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
    glVertex2f(10.0f, 0.0f);
    glVertex2f(10.0f, 30.0f);
    glVertex2f(20.0f, 35.0f);
    glVertex2f(30.0f, 30.0f);
    glVertex2f(30.0f, 0.0f);



    glEnd();
}
void b2()
{
    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
    glVertex2f(-30.0f, 0.0f);
    glVertex2f(10.0f, 0.0f);
    glVertex2f(10.0f, 20.0f);
    glVertex2f(-30.0f, 20.0f);




    glEnd();
}
void w1win()
{
    warhouse1win1();
    warhouse1win2();
    warhouse1win3();
    warhouse1win4();
    warhouse1win5();
    warhouse1win6();
}
void warhouse2win()
{
    warhouse2win1();
    warhouse2win2();
    warhouse2win3();
    warhouse2win4();
}
void w1()
{
    warhouse1ground();
    warhouse1roof();
    w1win();
    warhouse1pol();

    b1();
}
void w2()
{

    warhouse2();
    warhouse2win();
    warhouse2gate();

    b2();

}
void road() {
    glColor3ub(50, 50, 50); // Dark gray road
    glBegin(GL_POLYGON);
    glVertex2f(-30.0f, -5.0f);
    glVertex2f(30.0f, -5.0f);
    glVertex2f(30.0f, -20.0f);  // Make the road wider
    glVertex2f(-30.0f, -20.0f);
    glEnd();

    // Road lines
    glColor3ub(255, 255, 255); // White for road lines
    glBegin(GL_LINES);
    for (float i = -28.0f; i < 30.0f; i += 6.0f) {
        glVertex2f(i, -12.5f); // Adjusted y-coordinate for center dashed lines
        glVertex2f(i + 4.0f, -12.5f); // Dashed lines
    }
    glEnd();
}

void soil() {
    glColor3ub(139, 69, 19); // Brown soil color
    glBegin(GL_POLYGON);
    glVertex2f(-30.0f, -5.0f); // Bottom of the buildings
    glVertex2f(30.0f, -5.0f);
    glVertex2f(30.0f, 0.0f);   // Just above the road
    glVertex2f(-30.0f, 0.0f);
    glEnd();
}

void renderBitmapString(float x, float y, void *font, const char *string)
{
    const char *c;
    glRasterPos2f(x, y);
    for (c = string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}
void drawCircle(float radius, float centerX, float centerY) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX, centerY); // Center of the circle
    for (int i = 0; i <= 360; i += 5) {
        float theta = i * 3.14159 / 180;
        float x = centerX + radius * cos(theta);
        float y = centerY + radius * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();
}

void drawTree() {
    // Tree trunk
    glColor3ub(139, 69, 19); // Brown color for the trunk
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, 5.0f);
    glVertex2f(-1.0f, 5.0f);
    glEnd();

    // Tree leaves (3 circles)
    glColor3ub(34, 139, 34); // Green color for the leaves
    drawCircle(3.0f, 0.0f, 8.0f);  // Bottom circle
    drawCircle(2.5f, 0.0f, 10.0f); // Middle circle
    drawCircle(2.0f, 0.0f, 12.0f); // Top circle
}



void bus() {
    // Bus body

    glColor3ub(255, 0, 0); // Red color for the bus
    glBegin(GL_POLYGON);
    glVertex2f(-10.0f, -12.0f);
    glVertex2f(5.0f, -12.0f);
    glVertex2f(5.0f, -7.0f);
    glVertex2f(-10.0f, -7.0f);
    glEnd();

    // Bus windows
    glColor3ub(255, 255, 255); // White color for windows
    glBegin(GL_POLYGON);
    glVertex2f(-8.5f, -9.0f);
    glVertex2f(-6.5f, -9.0f);
    glVertex2f(-6.5f, -8.0f);
    glVertex2f(-8.5f, -8.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-4.5f, -9.0f);
    glVertex2f(-2.5f, -9.0f);
    glVertex2f(-2.5f, -8.0f);
    glVertex2f(-4.5f, -8.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.5f, -9.0f);
    glVertex2f(2.5f, -9.0f);
    glVertex2f(2.5f, -8.0f);
    glVertex2f(0.5f, -8.0f);
    glEnd();

    // Bus wheels
    glColor3ub(0, 0, 0); // Black for wheels
    float radius = 1.0f;
    float centerX1 = -8.0f;
    float centerX2 = 3.0f;
    float centerY = -12.5f;

    // Front wheel
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX1, centerY);
    for (int i = 0; i <= 360; i += 5) {
        float theta = i * 3.14159 / 180;
        float x = centerX1 + radius * cos(theta);
        float y = centerY + radius * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();

    // Rear wheel
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX2, centerY);
    for (int i = 0; i <= 360; i += 5) {
        float theta = i * 3.14159 / 180;
        float x = centerX2 + radius * cos(theta);
        float y = centerY + radius * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();
}

void lamp_pole() {
    glLineWidth(6.0);
    glColor3ub(50, 50, 50); // Dark gray for the lamp pole
    glBegin(GL_LINES);
    glVertex2f(0.0f, 0.0f);  // Base of the pole
    glVertex2f(0.0f, 20.0f); // Top of the pole
    glEnd();
}

void lamp_arm() {
    glLineWidth(4.0);
    glColor3ub(50, 50, 50); // Dark gray for the lamp arm
    glBegin(GL_LINES);
    glVertex2f(0.0f, 20.0f);  // Start from the top of the pole
    glVertex2f(5.0f, 23.0f);  // Extend outward for the lamp arm
    glEnd();
}

void lamp_light_bulb() {
    glColor3ub(255, 255, 150); // Light yellow for the glowing lamp
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i += 5) {
        float theta = i * 3.14159 / 180;
        float x = 1.0f * cos(theta);
        float y = 1.0f * sin(theta);
        glVertex2f(x + 5.0f, y + 23.0f); // Place light bulb at the end of the arm
    }
    glEnd();
}

void lamp_ground_base() {
    glColor3ub(50, 50, 50); // Dark gray for the lamp base
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i += 5) {
        float theta = i * 3.14159 / 180;
        float x = 2.0f * cos(theta);
        float y = 2.0f * sin(theta);
        glVertex2f(x + 0.0f, y + 0.0f); // Ground base at the bottom of the pole
    }
    glEnd();
}

void road_lamp() {
    glPushMatrix();
    // Translate to the desired position in your scene (adjust as needed)
    glTranslatef(15.0f, -5.0f, 0.0f);


    lamp_pole();         // Draw the pole
    lamp_arm();          // Draw the arm of the lamp
    lamp_light_bulb();   // Draw the light bulb at the end of the arm
    lamp_ground_base();  // Draw the base of the lamp on the ground

    glPopMatrix();
}
void drawDrum(float x, float y, float radius, float height) {
    int numSegments = 100;
    float angle;

    // Draw the top of the drum (circle)
    glColor3ub(169, 169, 169); // Gray metal color
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y + height); // Center of the top
    for (int i = 0; i <= numSegments; i++) {
        angle = i * 1.50f * 3.14159f / numSegments;
        glVertex2f(x + radius * cos(angle), y + height + radius * sin(angle));
    }
    glEnd();

    // Draw the sides of the drum
    glColor3ub(128, 128, 0); // Darker gray for sides
    glBegin(GL_QUAD_STRIP);
    for (int i = 0; i <= numSegments; i++) {
        angle = i * 1.50f * 3.14159f / numSegments;
        glVertex2f(x + radius * cos(angle), y); // Bottom vertex
        glVertex2f(x + radius * cos(angle), y + height); // Top vertex
    }
    glEnd();
}
void drums()
{
   drawDrum(-26.0f, 0.0f, 1.0f, 1.5f);
    drawDrum(-20.0f, 0.0f, 1.0f, 1.5f);
    drawDrum(20.0f, 0.0f, 1.0f, 1.5f);
    drawDrum(5.0f, 0.0f, 1.0f, 1.5f);
    drawDrum(-30.0f, 0.0f, 1.0f, 1.5f);
    drawDrum(10.0f, 0.0f, 1.0f, 1.5f);
    drawDrum(25.0f, 0.0f, 1.0f, 1.5f);
    drawDrum(30.0f, 0.0f, 1.0f, 1.5f);





}
void field() {
    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(-30.0f, -3.0f);
    glVertex2f(30.0f, -3.0f);
    glVertex2f(30.0f, 0.0f);
    glVertex2f(-30.0f, 0.0f);
    glEnd();
}

void drawGrassBlade() {
    glColor3ub(0, 100, 0); // Green color for the grass blade
    glBegin(GL_TRIANGLES);
    glVertex2f(0.1f, 0.1f);  // Base of the grass
    glVertex2f(1.0f, 1.0f);  // Tip of the grass
    glVertex2f(0.2f, 0.0f);  // Base of the grass
    glEnd();
}

void grassPatch() {
    for (float x = -30.0f; x < 30.0f; x += 1.0f) {
        for (float y = -3.0f; y < 0.0f; y += 1.0f) {
            glPushMatrix();
            glTranslatef(x, y, 0.0f); // Translate grass to position
            drawGrassBlade();
            glPopMatrix();
        }
    }
}


void display()
{

	glClear(GL_COLOR_BUFFER_BIT);
	drawSky(); // Draw the sky first
    drawSun();
    drawBirds();
    cloud(); // Draw the sun
    w1();
    w2();
    soil();
    road();
    pol2();
    bus();
    drawTree();
    drums();
    field();
    grassPatch();
    road_lamp();





    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-25.0f, 15.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Carew & Co (Bangladesh) Ltd");



	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(700,700);
    glutCreateWindow("Carew & Co (Bangladesh) Ltd");
	glClearColor(1.0,1.0,1.0,1.0);
	gluOrtho2D(-30.0,30.0,-20.0,35.0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
