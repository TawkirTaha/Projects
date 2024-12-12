#include <GL/gl.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

#define MAX_RAIN 100

typedef struct
{
    float x, y;
} Raindrop;

Raindrop rain[MAX_RAIN];  // Array of raindrops
int rainCount = 0;        // Current number of raindrops

void sun(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy) {
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++) {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

void init(void) {
    glClearColor(0.0, 0.9, 0.9, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 500, 0, 500);
}

float bx = 50;      // Position of the first boat (automatic)
float bx2 = 100;    // X position of the second boat (controlled by keyboard)
float by2 = -50;    // Y position of the second boat (controlled by keyboard)
float ax = 10;      // Cloud position
float sy = 450;     // Sun's starting Y position
float birdPosX = 300;  // Bird position (right to left)

// Keyboard handler to move second boat
void handleKeypress(int key, int x, int y) {
    switch (key) {
        case GLUT_KEY_LEFT:
            bx2 -= 5;  // Move boat left
            break;
        case GLUT_KEY_RIGHT:
            bx2 += 5;  // Move boat right
            break;
        case GLUT_KEY_UP:
            by2 += 5;  // Move boat up
            break;
        case GLUT_KEY_DOWN:
            by2 -= 5;  // Move boat down
            break;
    }
    glutPostRedisplay();  // Redraw the scene
}

// Mouse handler to control rain intensity
void handleMouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && rainCount < MAX_RAIN) {
        // Increase rain
        rain[rainCount].x = x + (rand() % 20 - 10);  // Slight randomization
        rain[rainCount].y = 500;  // Start above the window
        rainCount++;
    } else if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN && rainCount > 0) {
        // Decrease rain
        rainCount--;
    }
    glutPostRedisplay();  // Redraw the scene
}

void clouds() {
    glPushMatrix();
    glTranslatef(ax, 0, 0);  // Translate cloud by ax

    // 1st cloud
    glColor3ub(255, 255, 255);
    sun(20, 30, 460, 460);
    sun(15, 20, 445, 460);
    sun(15, 20, 475, 460);

    // 2nd cloud
    sun(20, 30, 390, 420);
    sun(15, 20, 405, 420);
    sun(15, 20, 375, 420);

    glPopMatrix();

    ax -= 0.02;  // Clouds move to the left
    if (ax < -550)  // Reset clouds when they move out of screen
        ax = 100;

    glutPostRedisplay();
}

void boat(float x, float y) {
    glPushMatrix();
    glTranslatef(x, y, 0);  // Translate boat by x and y

    // Boat body
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(325, 220);
    glVertex2d(400, 220);
    glVertex2d(425, 250);
    glVertex2d(300, 250);
    glEnd();

    // Boat upper part
    glColor3ub(205, 133, 63);
    glBegin(GL_POLYGON);
    glVertex2d(325, 250);
    glVertex2d(400, 250);
    glVertex2d(390, 280);
    glVertex2d(335, 280);
    glEnd();

    // Boat mast
    glColor3ub(160, 82, 45);
    glBegin(GL_POLYGON);
    glVertex2d(360, 280);
    glVertex2d(370, 280);
    glVertex2d(370, 310);
    glVertex2d(360, 310);
    glEnd();

    // Boat sail
    glColor3ub(128, 0, 128);
    glBegin(GL_POLYGON);
    glVertex2d(335, 290);
    glVertex2d(390, 290);
    glVertex2d(390, 375);
    glVertex2d(335, 375);
    glEnd();

    glPopMatrix();
}

void drawBird(float x, float y) {
    glColor3ub(0, 0, 0);  // Black color for the birds
    glBegin(GL_LINE_STRIP);
    glVertex2f(x, y);
    glVertex2f(x + 1.0f, y + 0.5f);  // Right wing up
    glVertex2f(x + 2.0f, y);         // V shape middle
    glVertex2f(x + 3.0f, y + 0.5f);  // Left wing up
    glVertex2f(x + 4.0f, y);         // Left wing down
    glEnd();
}

void drawBirds() {
    glPushMatrix();
    glTranslatef(birdPosX, 0.0f, 0.0f);  // Apply bird movement (right to left)

    // Draw individual birds at specified coordinates
    drawBird(130, 450);  // First bird
    drawBird(140, 455);  // Second bird
    drawBird(150, 460);  // Third bird
    drawBird(130, 465);  // Fourth bird
    drawBird(140, 470);  // Fifth bird

    glPopMatrix();

    birdPosX += 0.03f;  // Move birds left
    if (birdPosX > 10)  // Reset birds when off screen
        birdPosX = -550;

    glutPostRedisplay();
}

void drawRain() {
    glColor3ub(0, 0, 255);  // Color for the rain
    for (int i = 0; i < rainCount; i++) {
        glBegin(GL_LINES);
        glVertex2f(rain[i].x, rain[i].y);
        glVertex2f(rain[i].x, rain[i].y - 10);  // Length of the raindrop
        glEnd();

        // Move the raindrop down
        rain[i].y -= 5;
        if (rain[i].y < 0) {
            rain[i].y = 500;  // Reset to top
            rain[i].x = rand() % 500;  // Randomize X position
        }
    }
}
void sound()
{

    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("fahad3.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}



void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the sun
    glColor3ub(255, 215, 0);
    sun(25, 30, 175, sy);

    // Ground
    glColor3ub(0, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(500, 0);
    glVertex2d(500, 300);
    glVertex2d(0, 300);
    glEnd();

    // River
    glColor3ub(100, 149, 237);
    glBegin(GL_POLYGON);
    glVertex2d(300, 300);
    glVertex2d(250, 150);
    glVertex2d(400, 150);
    glVertex2d(450, 300);
    glEnd();

    glColor3ub(100, 149, 237);
    glBegin(GL_POLYGON);
    glVertex2d(300, 150);
    glVertex2d(250, 0);
    glVertex2d(400, 0);
    glVertex2d(450, 150);
    glEnd();

    glColor3ub(100, 149, 237);
    glBegin(GL_POLYGON);
    glVertex2d(-40, 200);
    glVertex2d(0, 300);
    glVertex2d(500, 300);
    glVertex2d(500, 200);
    glEnd();

    // Pyramids
    glColor3ub(184, 134, 11);
    glBegin(GL_POLYGON);
    glVertex2d(-40, 300);
    glVertex2d(200, 300);
    glVertex2d(100, 450);
    glEnd();

    glColor3ub(218, 165, 32);
    glBegin(GL_POLYGON);
    glVertex2d(150, 300);
    glVertex2d(350, 300);
    glVertex2d(250, 450);
    glEnd();

    glColor3ub(184, 134, 11);
    glBegin(GL_POLYGON);
    glVertex2d(300, 300);
    glVertex2d(520, 300);
    glVertex2d(400, 450);
    glEnd();

    // First boat (automatic)
    boat(bx, 0);

    // Second boat (controlled by keyboard/mouse)
    boat(bx2, by2);  // Now controlled in both X and Y directions

    // Update first boat position (automatic movement)
    bx += 0.03;
    if (bx > 0)  // Reset first boat when it moves out of screen
        bx = -550;

    // Tree trunk
    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2d(50, 150);
    glVertex2d(70, 150);
    glVertex2d(70, 300);
    glVertex2d(50, 300);
    glEnd();

    // Tree leaves
    glColor3ub(0, 128, 0);
    sun(30, 40, 35, 320);
    sun(30, 40, 85, 320);
    sun(25, 30, 45, 370);
    sun(30, 30, 70, 370);
    sun(25, 30, 55, 400);

    // Clouds
    clouds();

    // Birds
    drawBirds();

    // Draw rain
    drawRain();

    glFlush();
    glutSwapBuffers();

    // Update sun position
    sy -= 0.005;  // Move sun down slowly
    if (sy < 0)   // Reset sun when it goes off the bottom
        sy = 450;

    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(900, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Village Scenery");
    init();
    glutDisplayFunc(display);
    glutSpecialFunc(handleKeypress);  // Register keyboard handler
    glutMouseFunc(handleMouse);       // Register mouse handler
    sound();
    glutMainLoop();
    return 0;
}
