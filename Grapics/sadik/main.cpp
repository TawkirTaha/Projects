#include <windows.h>
#include <GL/glut.h>
#include <math.h>
float carPosX = -40.0f; // Start at the left
float carPosY = 5.0f;   // Fixed Y position (top)
float speed = 0.09f;     // Speed of the car
float cloudX = -40.0; // Initial x position of clouds
float speed1 = 0.1;   // Speed of cloud movement
bool movingRight = true; // Direction of cloud movement
float sunY = 30.0f; // Initial Y position of the sun
float sunSpeed = 0.005f; // Speed of the sunset
float sunR = 255, sunG = 223, sunB = 0; // Initial color of the sun (yellow)

void drawSky() {
    // Transition sky from blue to sunset colors as the sun sets
    if (sunY < 25.0f) {
        glColor3ub(255, 165, 0); // Orange sky at sunset
    } else {
        glColor3ub(135, 206, 235); // Daylight blue sky
    }

    glBegin(GL_POLYGON);
    glVertex2f(-40.0f, 5.0f);
    glVertex2f(-40.0f, 45.0f);
    glVertex2f(40.0f, 45.0f);
    glVertex2f(40.0f, 5.0f);
    glEnd();
}
void drawGrassBlade(float x, float y) {
    glColor3ub(144, 238, 144);  // Set grass color

    float bladeWidth = 0.6f; // Increased blade width
    float bladeHeight = 2.5f; // Increased blade height

    glBegin(GL_TRIANGLES);
    glVertex2f(x, y);          // Bottom of the blade
    glVertex2f(x + bladeWidth, y);   // Bottom width of the blade
    glVertex2f(x + bladeWidth / 2.0f, y + bladeHeight); // Top of the blade (centered at the top)
    glEnd();
}

// Function to draw grass field with evenly spaced blades
void drawGrassField() {
    for (float y = -10.0f; y <= 5.0f; y += 0.5f) {
        for (float x = -40.0f; x <= 40.0f; x += 1.0f) { // Consistent spacing for grass blades
            drawGrassBlade(x, y);
        }
    }
}

// Original function to draw the field
void drawField() {
    // Draw the grass field as the base
    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);  // Green field color
    glVertex2f(-40.0f, -10.0f);
    glVertex2f(40.0f, -10.0f);
    glVertex2f(40.0f, 5.0f);
    glVertex2f(-40.0f, 5.0f);
    glEnd();

    // Call the function to draw individual grass blades
    drawGrassField();
}

void drawSun() {
    glColor3ub(sunR, sunG, sunB); // Set the sun color
    float radius = 3.0f;
    float centerX = 25.0f;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX, sunY); // Animate the Y position
    for (int i = 0; i <= 360; i += 5) {
        float theta = i * 3.14159 / 180;
        float x = centerX + radius * cos(theta);
        float y = sunY + radius * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();
}


void part1base()
{

    glColor3ub(210, 180, 140);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-30.0f, 5.0f);
    glVertex2f(-30.0f, 24.0f);
    glVertex2f(-23.0f, 24.5f);
    glVertex2f(-23.0f, 5.0f);
    glEnd();

}
void part1tri()
{

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-28.0f, 10.0f);
    glVertex2f(-26.0f, 14.0f);
    glVertex2f(-23.0f, 10.0f);

    glEnd();

}
void b1()
{
    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
   glVertex2f(-30.0f, 5.0f);
    glVertex2f(-30.0f, 24.0f);
    glVertex2f(-23.0f, 24.5f);
    glVertex2f(-23.0f, 5.0f);
    glEnd();


}
void part1()
{
    part1base(); part1tri(); b1();
}
void part2base()
{

    glColor3ub(210, 180, 140);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-23.0f, 5.0f);
    glVertex2f(-23.0f, 25.0f);
    glVertex2f(-17.0f, 26.0f);
    glVertex2f(-17.0f, 5.0f);
    glEnd();

}
void part2tri()
{

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-22.0f, 12.0f);
    glVertex2f(-21.0f, 22.0f);
    glVertex2f(-19.0f, 12.0f);

    glEnd();

}
void part2squ()
{

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-22.0f, 5.0f);
    glVertex2f(-22.0f, 8.0f);
    glVertex2f(-19.0f, 8.0f);
    glVertex2f(-19.0f, 5.0f);

    glEnd();

}
void b2()
{

    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
  glVertex2f(-23.0f, 5.0f);
    glVertex2f(-23.0f, 25.0f);
    glVertex2f(-17.0f, 26.0f);
    glVertex2f(-17.0f, 5.0f);
    glEnd();



}
void part2()
{
    part2base(); part2tri(); part2squ(); b2();
}

void part3base()
{

    glColor3ub(210, 180, 140);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-17.0f, 5.0f);
    glVertex2f(-17.0f, 26.0f);
    glVertex2f(-10.0f, 27.0f);
    glVertex2f(-10.0f, 5.0f);
    glEnd();

}
void part3tri()
{

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-15.0f, 13.0f);
    glVertex2f(-13.0f, 23.0f);
    glVertex2f(-11.0f, 13.0f);

    glEnd();

}
void part3squ()
{

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-15.0f, 5.0f);
    glVertex2f(-15.0f, 9.0f);
    glVertex2f(-11.0f, 9.0f);
    glVertex2f(-11.0f, 5.0f);

    glEnd();

}
void b3()
{
    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
  glVertex2f(-17.0f, 5.0f);
    glVertex2f(-17.0f, 26.0f);
    glVertex2f(-10.0f, 27.0f);
    glVertex2f(-10.0f, 5.0f);
    glEnd();



}
void part3()
{
    part3base(); part3tri(); part3squ(); b3();
}

void part4base()
{

    glColor3ub(210, 180, 140);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-10.0f, 5.0f);
    glVertex2f(-10.0f, 27.0f);
    glVertex2f(-5.0f, 27.0f);
    glVertex2f(-5.0f, 5.0f);
    glEnd();

}

void part4circle() {
    // Draw the sun
    glColor3ub(0, 0, 0); // Yellow color for the sun
    float radius = 2.0f;
    float centerX = -8.0f; // X position of the sun
    float centerY = 12.0f; // Y position of the sun
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



void b4()
{
    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
  glVertex2f(-10.0f, 5.0f);
    glVertex2f(-10.0f, 27.0f);
    glVertex2f(-5.0f, 27.0f);
    glVertex2f(-5.0f, 5.0f);
    glEnd();



}
void part4()
{
    part4base(); b4(); part4circle();
}


void part5base()
{

    glColor3ub(210, 180, 140);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-5.0f, 5.0f);
    glVertex2f(-5.0f, 27.0f);
    glVertex2f(2.0f, 27.0f);
    glVertex2f(2.0f, 5.0f);
    glEnd();

}



void b5()
{
    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
  glVertex2f(-5.0f, 5.0f);
    glVertex2f(-5.0f, 27.0f);
    glVertex2f(2.0f, 27.0f);
    glVertex2f(2.0f, 5.0f);
    glEnd();



}
void part5()
{
    part5base(); b5();
}

void part6base()
{

    glColor3ub(210, 180, 140);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(2.0f, 5.0f);
    glVertex2f(2.0f, 27.0f);
    glVertex2f(5.0f, 27.0f);
    glVertex2f(5.0f, 5.0f);
    glEnd();

}

void part6squ()
{

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(2.0f, 5.0f);
    glVertex2f(2.0f, 7.0f);
    glVertex2f(5.0f, 7.0f);
    glVertex2f(5.0f, 5.0f);

    glEnd();

}

void b6()
{
    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
 glVertex2f(2.0f, 5.0f);
    glVertex2f(2.0f, 27.0f);
    glVertex2f(5.0f, 27.0f);
    glVertex2f(5.0f, 5.0f);
    glEnd();



}
void part6()
{
    part6base(); b6(); part6squ();
}



void part7base()
{

    glColor3ub(210, 180, 140);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(5.0f, 5.0f);
    glVertex2f(5.0f, 27.0f);
    glVertex2f(12.0f, 27.0f);
    glVertex2f(12.0f, 5.0f);
    glEnd();

}

void b7()
{
    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
 glVertex2f(5.0f, 5.0f);
    glVertex2f(5.0f, 27.0f);
    glVertex2f(12.0f, 27.0f);
    glVertex2f(12.0f, 5.0f);
    glEnd();



}
void part7()
{
    part7base(); b7();
}

void part8base()
{

    glColor3ub(210, 180, 140);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(12.0f, 5.0f);
    glVertex2f(12.0f, 27.0f);
    glVertex2f(19.0f, 26.0f);
    glVertex2f(19.0f, 5.0f);
    glEnd();

}

void part8circle() {
    // Draw the sun
    glColor3ub(0, 0, 0); // Yellow color for the sun
    float radius = 2.0f;
    float centerX = 16.0f; // X position of the sun
    float centerY = 12.0f; // Y position of the sun
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
void b8()
{
    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
 glVertex2f(12.0f, 5.0f);
    glVertex2f(12.0f, 27.0f);
    glVertex2f(19.0f, 26.0f);
    glVertex2f(19.0f, 5.0f);
    glEnd();



}

void part8()
{
    part8base(); b8(); part8circle();
}


void part9base()
{

    glColor3ub(210, 180, 140);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(19.0f, 5.0f);
    glVertex2f(19.0f, 26.0f);
    glVertex2f(25.0f, 25.0f);
    glVertex2f(25.0f, 5.0f);
    glEnd();

}

void part9tri()
{

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(20.0f, 13.0f);
    glVertex2f(22.0f, 22.0f);
    glVertex2f(23.0f, 13.0f);

    glEnd();

}
void part9squ()
{

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(20.0f, 5.0f);
    glVertex2f(20.0f, 9.0f);
    glVertex2f(23.0f, 9.0f);
    glVertex2f(23.0f, 5.0f);

    glEnd();

}

void b9()
{
    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
 glVertex2f(19.0f, 5.0f);
    glVertex2f(19.0f, 26.0f);
    glVertex2f(25.0f, 25.0f);
    glVertex2f(25.0f, 5.0f);
    glEnd();



}
void part9()
{
    part9base(); b9(); part9squ(); part9tri();
}


void part10base()
{

    glColor3ub(210, 180, 140);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(25.0f, 5.0f);
    glVertex2f(25.0f, 25.0f);
    glVertex2f(32.0f, 25.0f);
    glVertex2f(32.0f, 5.0f);
    glEnd();

}

void part10tri()
{

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(28.0f, 12.0f);
    glVertex2f(30.0f, 22.0f);
    glVertex2f(31.0f, 12.0f);

    glEnd();

}
void part10squ()
{

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(28.0f, 5.0f);
    glVertex2f(28.0f, 8.0f);
    glVertex2f(31.0f, 8.0f);
    glVertex2f(31.0f, 5.0f);

    glEnd();

}

void b10()
{
    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
    glVertex2f(25.0f, 5.0f);
    glVertex2f(25.0f, 25.0f);
    glVertex2f(32.0f, 25.0f);
    glVertex2f(32.0f, 5.0f);
    glEnd();



}
void part10()
{
    part10base(); b10(); part10tri(); part10squ();

}
void part11base()
{

    glColor3ub(210, 180, 140);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(32.0f, 5.0f);
    glVertex2f(32.0f, 24.5f);
    glVertex2f(37.0f, 24.5f);
    glVertex2f(37.0f, 5.0f);
    glEnd();

}


void b11()
{

    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
    glVertex2f(32.0f, 5.0f);
    glVertex2f(32.0f, 24.5f);
    glVertex2f(37.0f, 24.5f);
    glVertex2f(37.0f, 5.0f);
    glEnd();
}
void part11()
{
    part11base(); b11();

}

void cloudCircle(float r, float x, float y) {
    glColor3ub(255, 255, 255); // White color for the clouds
    float radius = r;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // Center of the cloud
    for (int i = 0; i <= 360; i += 5) {
        float theta = i * M_PI / 180;
        float cx = x + radius * cos(theta);
        float cy = y + radius * sin(theta);
        glVertex2f(cx, cy);
    }
    glEnd();
}


void cloud1() {
    // Draw multiple clouds
    cloudCircle(2, cloudX - 25.0, 35.0);
    cloudCircle(2, cloudX - 22.5, 35.0);
    cloudCircle(2, cloudX - 23.75, 37.0);

    cloudCircle(2, cloudX + 15.0, 35.0);
    cloudCircle(2, cloudX + 17.5, 35.0);
    cloudCircle(2, cloudX + 16.25, 37.0);

    cloudCircle(2, cloudX + 30.0, 35.0);
    cloudCircle(2, cloudX + 32.5, 35.0);
    cloudCircle(2, cloudX + 31.25, 37.0);
}

void road() {
    glColor3ub(50, 50, 50); // Dark gray road
    glBegin(GL_POLYGON);
glVertex2f(-40.0f, 0.0f);
    glVertex2f(-40.0f, 5.0f);
    glVertex2f(40.0f, 5.0f);
    glVertex2f(40.0f, 0.0f);
    glEnd();

    // Road lines
    glColor3ub(255, 255, 255); // White for road lines
    glBegin(GL_LINES);
    for (float i = -40.0f; i < 40.0f; i += 6.0f) {
        glVertex2f(i, 2.5f); // Adjusted y-coordinate for center dashed lines
        glVertex2f(i + 4.0f, 2.5f); // Dashed lines
    }
    glEnd();
}


void tree_body()
{

    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON); //ABCD
    glVertex2f(-35.0f, 5.0f);
    glVertex2f(-35.0f, 11.0f);
    glVertex2f(-34.5f, 11.0f);
    glVertex2f(-34.5f, 5.0f);
    glEnd();

    glColor3ub(1, 1, 1);
    glBegin(GL_LINE_LOOP); //ABCD
    glVertex2f(-35.0f, 5.0f);
    glVertex2f(-35.0f, 11.0f);
    glVertex2f(-34.5f, 11.0f);
    glVertex2f(-34.5f, 5.0f);
    glEnd();

}

void tree_leaf(float r,float x,float y) {
    // Draw the sun
    glColor3ub(34, 139, 34); // Yellow color for the sun
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

void tree1()
{
    tree_body();
     tree_leaf(1.5,-35.0f,11.0);
    tree_leaf(1.5,-34.0f,11.0);
    tree_leaf(1.5,-34.5f,12.5);
}
void lamp_post_circle(float r,float x,float y) {
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
void lamp_post_body()
{
    glLineWidth(5);
    glColor3ub(128, 128, 128);
    glBegin(GL_LINE_LOOP); //ABCD
    glVertex2f(-25.0f, 5.0f);
    glVertex2f(-25.0f, 9.0f);
    glEnd();

    glLineWidth(5);
    glColor3ub(128, 128, 128);
    glBegin(GL_LINE_LOOP); //ABCD
    glVertex2f(-26.5f, 9.0f);
    glVertex2f(-23.5f, 9.0f);
    glEnd();
}
void lamp_post()
{
     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.0,1.0,1.0);
    glTranslatef(0.0,0.0,0);
    lamp_post_body();
    lamp_post_circle(0.8,-26.5f, 9.0f);
    lamp_post_circle(0.8,-23.5f, 9.0f);
    glPopMatrix();

      glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.0,1.0,1.0);
    glTranslatef(-12.0,0.0,0);
    lamp_post_body();
    lamp_post_circle(0.8,-26.5f, 9.0f);
    lamp_post_circle(0.8,-23.5f, 9.0f);
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.0,1.0,1.0);
    glTranslatef(10.0,0.0,0);
    lamp_post_body();
    lamp_post_circle(0.8,-26.5f, 9.0f);
    lamp_post_circle(0.8,-23.5f, 9.0f);
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.0,1.0,1.0);
    glTranslatef(20.0,0.0,0);
    lamp_post_body();
    lamp_post_circle(0.8,-26.5f, 9.0f);
    lamp_post_circle(0.8,-23.5f, 9.0f);
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.0,1.0,1.0);
    glTranslatef(30.0,0.0,0);
    lamp_post_body();
    lamp_post_circle(0.8,-26.5f, 9.0f);
    lamp_post_circle(0.8,-23.5f, 9.0f);
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.0,1.0,1.0);
    glTranslatef(40.0,0.0,0);
    lamp_post_body();
    lamp_post_circle(0.8,-26.5f, 9.0f);
    lamp_post_circle(0.8,-23.5f, 9.0f);
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.0,1.0,1.0);
    glTranslatef(50.0,0.0,0);
    lamp_post_body();
    lamp_post_circle(0.8,-26.5f, 9.0f);
    lamp_post_circle(0.8,-23.5f, 9.0f);
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.0,1.0,1.0);
    glTranslatef(60.0,0.0,0);
    lamp_post_body();
    lamp_post_circle(0.8,-26.5f, 9.0f);
    lamp_post_circle(0.8,-23.5f, 9.0f);
    glPopMatrix();
}
void drawCarBody() {
    glColor3ub(255, 0, 0); // Red color for the car body
    glBegin(GL_POLYGON);
    glVertex2f(-20.0f, 2.0f); // Bottom-left of car body (scaled by 2)
    glVertex2f(-20.0f, 6.0f); // Top-left of car body (scaled by 2)
    glVertex2f(-14.0f, 6.0f);  // Top-right of car body (scaled by 2)
    glVertex2f(-14.0f, 2.0f);  // Bottom-right of car body (scaled by 2)
    glEnd();
}

void drawCarRoof() {
    glColor3ub(0, 0, 255); // Blue color for the car roof
    glBegin(GL_POLYGON);
    glVertex2f(-19.0f, 6.0f); // Bottom-left of roof (scaled by 2)
    glVertex2f(-19.0f, 8.0f); // Top-left of roof (scaled by 2)
    glVertex2f(-15.0f, 8.0f); // Top-right of roof (scaled by 2)
    glVertex2f(-15.0f, 6.0f); // Bottom-right of roof (scaled by 2)
    glEnd();

    // Left window
    glColor3ub(135, 206, 235); // Light blue color for windows
    glBegin(GL_POLYGON);
    glVertex2f(-18.8f, 6.2f); // Bottom-left of window
    glVertex2f(-18.8f, 7.5f); // Top-left of window
    glVertex2f(-17.0f, 7.5f); // Top-right of window
    glVertex2f(-17.0f, 6.2f); // Bottom-right of window
    glEnd();

    // Right window
    glBegin(GL_POLYGON);
    glVertex2f(-16.8f, 6.2f); // Bottom-left of window
    glVertex2f(-16.8f, 7.5f); // Top-left of window
    glVertex2f(-15.2f, 7.5f); // Top-right of window
    glVertex2f(-15.2f, 6.2f); // Bottom-right of window
    glEnd();
}

void drawCar() {
    // Draw car body
    glColor3ub(255, 0, 0); // Red car body
    glBegin(GL_POLYGON);
    glVertex2f(carPosX - 10.0f, carPosY - 2.0f);
    glVertex2f(carPosX - 10.0f, carPosY);
    glVertex2f(carPosX + 10.0f, carPosY);
    glVertex2f(carPosX + 10.0f, carPosY - 2.0f);
    glEnd();

    // Draw car roof
    glColor3ub(65, 105, 225); // Darker red roof
    glBegin(GL_POLYGON);
    glVertex2f(carPosX - 6.0f, carPosY);
    glVertex2f(carPosX - 6.0f, carPosY + 2.0f);
    glVertex2f(carPosX + 6.0f, carPosY + 2.0f);
    glVertex2f(carPosX + 6.0f, carPosY);
    glEnd();

    // Draw wheels
    glColor3ub(0, 0, 0); // Black wheels
    float radius = 1.0f;
    // Left wheel
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(carPosX - 7.0f, carPosY - 2.0f); // Center of wheel
    for (int i = 0; i <= 360; i += 5) {
        float theta = i * 3.14159 / 180;
        float x = carPosX - 7.0f + radius * cos(theta);
        float y = carPosY - 2.0f + radius * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();
    // Right wheel
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(carPosX + 7.0f, carPosY - 2.0f); // Center of wheel
    for (int i = 0; i <= 360; i += 5) {
        float theta = i * 3.14159 / 180;
        float x = carPosX + 7.0f + radius * cos(theta);
        float y = carPosY - 2.0f + radius * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();
}


void display()
{

	glClear(GL_COLOR_BUFFER_BIT);
	drawSky();
	drawField();
	drawSun();

	cloud1();
	part1();
	part2();
	part3();
	part4();
    part5();
    part6();
    part7();
    part8();
    part9();
    part10();
    part11();

    tree1();

    lamp_post();


    road() ;
    drawCar();

	glFlush();

}
void update(int value) {
    // Update the car position
    carPosX += speed;

    // Reset position if it goes off the screen
    if (carPosX > 40.0f) {
        carPosX = -40.0f; // Reset to start
    }

    glutPostRedisplay(); // Request a redraw
    glutTimerFunc(16, update, 0); // ~60 frames per second
}
void update1(int value) {
    if (movingRight) {
        cloudX += speed1; // Move clouds to the right
        if (cloudX > 40.0) { // If it reaches the right boundary, change direction
            movingRight = false;
        }
    } else {
        cloudX -= speed1; // Move clouds to the left
        if (cloudX < -40.0) { // If it reaches the left boundary, change direction
            movingRight = true;
        }
    }

    glutPostRedisplay(); // Redraw the scene
    glutTimerFunc(16, update1, 0); // Call update again after 16 ms (~60 FPS)
}
void updateSun(int value) {
    // Move the sun downwards
    sunY -= sunSpeed;

    // Change sun color as it sets (from yellow to orange-red)
    if (sunY < 25.0f) {
        if (sunR > 255) sunR = 255;
        if (sunG > 140) sunG -= 1; // Reduce green component for orange color
        if (sunB < 0) sunB = 0;
    }

    if (sunY < 15.0f) {
        if (sunR > 255) sunR = 255;
        if (sunG > 69) sunG -= 2; // Further reduce green for red tint
        if (sunB < 0) sunB = 0;
    }

    // Stop the sun from going below the horizon
    if (sunY > -5.0f) {
        glutPostRedisplay(); // Request a redraw
        glutTimerFunc(16, updateSun, 0); // ~60 FPS update
    }
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(700,700);

    glutCreateWindow("Songsod");
	glClearColor(1.0,1.0,1.0,1.0);
	gluOrtho2D(-40.0,40.0,-10.0,40.0);
	glutTimerFunc(0, update, 0); // Start the update loop
	glutTimerFunc(0, update1, 0); // Start the update loop
	glutTimerFunc(0, updateSun, 0); // Sun update (sunset)


	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}


