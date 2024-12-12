#include <windows.h>
#include <GL/glut.h>
#include <math.h>
float busPosX = -30.0f;    // Initial bus X position
float busSpeed = 0.5f;     // Speed of the bus

float carPosX = 10.0f;     // Initial car X position (on the other side of the road)
float carSpeed = 0.5f;     // Speed of the car
// Initial positions and speeds for both cloud groups
float cloud1PosX = 0.0f;   // Initial position for cloud group 1
float cloud2PosX = 10.0f;  // Initial position for cloud group 2
float cloudSpeed = 0.09f;  // Speed of the cloud

float birdPosX = 10.0f;    // Initial bird X position (moving right to left)
float birdSpeed = 0.09f;   // Speed of the birds

bool lightOn = false;

// Global variables for sunset animation
float sunsetTime = 0.0f;          // Time factor for the sunset effect
float skyR = 135, skyG = 206, skyB = 250;  // Initial sky color (light blue)
float sunPosX = -20.0f;           // Initial sun X position
float sunPosY = 25.0f;            // Initial sun Y position
float sunR = 255, sunG = 255, sunB = 0;    // Initial sun color (yellow)
bool isSunSetting = true;         // Flag to indicate if the sun is setting

void updateSunset() {
    if (isSunSetting) {
        sunsetTime += 0.0009f; // Increment the sunset time factor
        if (sunsetTime > 1.0f) {
            sunsetTime = 1.0f; // Cap the sunset time factor
            isSunSetting = false; // Stop the sunset effect
        }

        // Update sky color from light blue to dark blue
        skyR = 135 + (255 - 135) * sunsetTime;
        skyG = 206 + (0 - 206) * sunsetTime;
        skyB = 250 + (0 - 250) * sunsetTime;

        // Update sun position for diagonal movement (downward-left)
        sunPosY = 25.0f - 25.0f * sunsetTime;  // Vertical movement
        sunPosX = -20.0f - 25.0f * sunsetTime; // Horizontal movement

        // Optionally, change sun color to darker as it sets
        sunR = 255 - (255 - 128) * sunsetTime;
        sunG = 255 - (255 - 102) * sunsetTime;
        sunB = 0;
    }
}

void drawSky() {
    // Apply changing sky color based on the sunset progress
    glBegin(GL_POLYGON);
    glColor3ub(skyR, skyG, skyB); // Transitioning sky color
    glVertex2f(-30.0f, 0.0f);
    glVertex2f(30.0f, 0.0f);
    glVertex2f(30.0f, 35.0f);
    glVertex2f(-30.0f, 35.0f);
    glEnd();
}

void drawSun() {
    // Draw the sun with changing color and diagonal position
    glColor3ub(sunR, sunG, sunB); // Transitioning sun color
    float radius = 3.0f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(sunPosX, sunPosY); // Center of the sun
    for (int i = 0; i <= 360; i += 5) {
        float theta = i * 3.14159 / 180;
        float x = sunPosX + radius * cos(theta);
        float y = sunPosY + radius * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();
}


void cloudCircle(float r, float x, float y) {
    glColor3ub(255, 255, 255); // White for the cloud
    float radius = r;
    float centerX = x;
    float centerY = y;
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

void drawClouds() {
    // Cloud group 1
    glPushMatrix();
    glTranslatef(cloud1PosX, 0.0f, 0.0f);
    cloudCircle(2, -5.0, 25.0);
    cloudCircle(2, -2.5, 25.0);
    cloudCircle(2, -3.75, 27.0);
    glPopMatrix();

    // Cloud group 2
    glPushMatrix();
    glTranslatef(cloud2PosX, 0.0f, 0.0f);
    cloudCircle(2, -15.0, 32.0);
    cloudCircle(2, -12.5, 32.0);
    cloudCircle(2, -13.75, 34.0);
    glPopMatrix();
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
    glPushMatrix();
    glTranslatef(birdPosX, 0.0f, 0.0f);  // Apply the bird movement (right to left)

    // Draw individual birds at specified coordinates
    drawBird(10.0f, 30.0f);   // First bird
    drawBird(15.0f, 25.0f);   // Second bird
    drawBird(12.0f, 22.0f);   // Third bird
    drawBird(18.0f, 28.0f);   // Fourth bird
    drawBird(20.0f, 26.0f);   // Fifth bird

    glPopMatrix();
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
    glVertex2f(30.0f, -25.0f);  // Make the road wider
    glVertex2f(-30.0f, -25.0f);
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
    glPushMatrix();
    glTranslatef(busPosX, 0.0f, 0.0f);
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
     glPopMatrix();
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
void mouse(int button, int state, int x, int y) {
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
        lightOn = true; // Turn on the lamp light
    } else if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        lightOn = false; // Turn off the lamp light
    }
}
void drawLampLight() {
    if (lightOn) {
        glColor3ub(255, 255, 150); // Light yellow for the glowing lamp
        glBegin(GL_TRIANGLE_FAN);
        glVertex2f(5.0f, 23.0f); // Lamp light position
        for (int i = 0; i <= 360; i += 5) {
            float theta = i * 3.14159 / 180;
            float x = 3.0f * cos(theta);
            float y = 3.0f * sin(theta);
            glVertex2f(5.0f + x, 23.0f + y);
        }
        glEnd();
    }
}

void road_lamp() {
    glPushMatrix();
    glTranslatef(15.0f, -5.0f, 0.0f); // Position the lamp

    lamp_ground_base(); // Draw the base of the lamp
    lamp_pole();        // Draw the pole of the lamp
    lamp_arm();         // Draw the arm of the lamp
    lamp_light_bulb();  // Draw the light bulb

    if (lightOn) {
        drawLampLight(); // Draw the glowing effect if the light is on
    }

    glPopMatrix();
}
// Mouse interaction function

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
    glVertex2f(02.1f, 0.1f);  // Base of the grass
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

void drawCar() {

   // Car body
   glColor3ub(0, 0, 255); // Blue color for the car
   glBegin(GL_POLYGON);
   glVertex2f(-5.0f, -1.0f);
   glVertex2f(5.0f, -1.0f);
   glVertex2f(5.0f, 1.0f);
   glVertex2f(-5.0f, 1.0f);
   glEnd();
   // Car roof
   glColor3ub(0, 0, 200); // Darker blue for the roof
   glBegin(GL_POLYGON);
   glVertex2f(-3.0f, 1.0f);
   glVertex2f(3.0f, 1.0f);
   glVertex2f(2.0f, 3.0f);
   glVertex2f(-2.0f, 3.0f);
   glEnd();
   // Car wheels
   glColor3ub(0, 0, 0); // Black for wheels
   drawCircle(1.0f, -3.0f, -1.0f); // Left wheel
   drawCircle(1.0f, 3.0f, -1.0f);  // Right wheel

}
// New special keys handler for car speed
void sound()
{

    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("project.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}



void display()
{

	glClear(GL_COLOR_BUFFER_BIT);
	updateSunset();
	drawSky(); // Draw the sky first
    drawSun();
    drawClouds();
    drawBirds();
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


    glPushMatrix();
    glTranslatef(carPosX, -15.0f, 0.0f);
    drawCar();  // Draw the car
    glPopMatrix();






    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-25.0f, 15.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Carew & Co (Bangladesh) Ltd");



	glutSwapBuffers();
}
// main key

void handleKeypress(unsigned char key, int x, int y) {
    if (key == 'w') {
        carSpeed += 0.1f;  // Increase speed on left click
    }

    if (key == 'b') {
        carSpeed = 0; // Switch to city view
    }

       if (key == 's') {
        carSpeed -= 0.1f; // Switch to city view
    }


}




void update(int value) {
    // Update cloud positions
    cloud1PosX += cloudSpeed;
    cloud2PosX += cloudSpeed;

    // Reset the clouds when they move out of view (wrap around)
    if (cloud1PosX > 30.0f) {
        cloud1PosX = -30.0f;
    }
    if (cloud2PosX > 30.0f) {
        cloud2PosX = -30.0f;
    }


    // Update bus position
    busPosX += busSpeed;
    if (busPosX > 30.0f) {
        busPosX = -30.0f;
    }

// Update bird position (move left)
    birdPosX -= birdSpeed;
    if (birdPosX < -30.0f) {  // Wrap around when bird goes off screen
        birdPosX = 30.0f;
    }
     carPosX += carSpeed;
   if (carPosX > 30.0f) {  // Wrap around when car goes off screen
       carPosX = -30.0f;
   }

    glutPostRedisplay();  // Redraw the scene
    glutTimerFunc(50, update, 0);

}
void timer(int value) {
    glutPostRedisplay();
    glutTimerFunc(16, timer, 0); // Call timer function every 16 ms (about 60 FPS)
}

void update_car(int value) {
    if (carPosX > 30.0f) carPosX = -30.0f;  // Reset position after moving off the screen
    carPosX += carSpeed;  // Update position based on speed

    glutPostRedisplay();  // Redraw the scene
    glutTimerFunc(100, update, 0);  // Call this function again in 100ms
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);

	glutInitWindowSize(700,700);
    glutCreateWindow("Carew & Co (Bangladesh) Ltd");
	glClearColor(1.0,1.0,1.0,1.0);
	gluOrtho2D(-30.0,30.0,-25.0,35.0);
	glutKeyboardFunc(handleKeypress);

	glutMouseFunc(mouse);            // Set mouse interaction function
	glutTimerFunc(50, update, 0);// Start the timer
	glutTimerFunc(100, update_car, 0);  // Register timer function for car movement

	glutTimerFunc(25, timer, 0);

	glutDisplayFunc(display);
	sound();
	 // something cooming
	glutMainLoop();
	return 0;
}
