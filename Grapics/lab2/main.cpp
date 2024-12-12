#include <windows.h>
#include <GL/glut.h>
#include <cmath>

void drawStar(float centerX, float centerY, float radius) {
    glColor3f(1.0f, 1.0f, 1.0f); // White color
    glBegin(GL_TRIANGLES);
    for (int i = 0; i < 5; ++i) {
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radius * cos(2 * M_PI * i / 5), centerY + radius * sin(2 * M_PI * i / 5));
        glVertex2f(centerX + radius * cos(2 * M_PI * (i + 2) / 5), centerY + radius * sin(2 * M_PI * (i + 2) / 5));
    }
    glEnd();
}

void drawEuropeFlag() {
    glColor3f(0.0, 0.0, 0.5);
    glBegin(GL_QUADS);
        glVertex2f(-1.0, 1.0);
        glVertex2f(1.0, 1.0);
        glVertex2f(1.0, -1.0);
        glVertex2f(-1.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    float radius = 0.1;
    for (int i = 0; i < 12; i++) {
        float angle = i * 2.0f * 3.1415926f / 12.0f;
        float x = 0.5 * cosf(angle);
        float y = 0.5 * sinf(angle);
        drawStar(x, y, radius);
    }
}

void drawUnionJack() {
    glColor3f(0.0, 0.0, 0.5);
    glBegin(GL_QUADS);
        glVertex2f(-1.0, 1.0);
        glVertex2f(1.0, 1.0);
        glVertex2f(1.0, -1.0);
        glVertex2f(-1.0, -1.0);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(10.0);
    glBegin(GL_LINES);
        glVertex2f(-1.0, 1.0);
        glVertex2f(1.0, -1.0);
        glVertex2f(1.0, 1.0);
        glVertex2f(-1.0, -1.0);
        glVertex2f(-1.0, 0.0);
        glVertex2f(1.0, 0.0);
        glVertex2f(0.0, 1.0);
        glVertex2f(0.0, -1.0);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
        glVertex2f(-1.0, 1.0);
        glVertex2f(1.0, -1.0);
        glVertex2f(1.0, 1.0);
        glVertex2f(-1.0, -1.0);
        glVertex2f(-1.0, 0.0);
        glVertex2f(1.0, 0.0);
        glVertex2f(0.0, 1.0);
        glVertex2f(0.0, -1.0);
    glEnd();
}

void drawNewZealandFlag() {
    glColor3f(0.0, 0.0, 0.5);
    glBegin(GL_QUADS);
        glVertex2f(-1.0, 1.0);
        glVertex2f(1.0, 1.0);
        glVertex2f(1.0, -1.0);
        glVertex2f(-1.0, -1.0);
    glEnd();

    glPushMatrix();
    glScalef(0.5, 0.5, 1.0);
    glTranslatef(-1.0, 1.0, 0.0);
    drawUnionJack();
    glPopMatrix();

    glColor3f(1.0, 1.0, 1.0);
    float starCenters[4][2] = {{0.4, 0.3}, {0.5, 0.2}, {0.6, 0.3}, {0.7, 0.2}};
    float starRadius = 0.05;

    for (int i = 0; i < 4; ++i) {
        drawStar(starCenters[i][0], starCenters[i][1], starRadius + 0.02);
    }

    glColor3f(1.0, 0.0, 0.0);
    for (int i = 0; i < 4; ++i) {
        drawStar(starCenters[i][0], starCenters[i][1], starRadius);
    }
}

void drawSamoaFlag() {
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(-1.0, 1.0);
        glVertex2f(1.0, 1.0);
        glVertex2f(1.0, -1.0);
        glVertex2f(-1.0, -1.0);
    glEnd();

    glColor3f(0.0, 0.0, 0.5);
    glBegin(GL_QUADS);
        glVertex2f(-1.0, 1.0);
        glVertex2f(-0.5, 1.0);
        glVertex2f(-0.5, 0.5);
        glVertex2f(-1.0, 0.5);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    float starCenters[5][2] = {{-0.75, 0.8}, {-0.7, 0.7}, {-0.8, 0.7}, {-0.75, 0.6}, {-0.85, 0.6}};
    float starRadius = 0.05;

    for (int i = 0; i < 5; ++i) {
        drawStar(starCenters[i][0], starCenters[i][1], starRadius);
    }
}

void drawCanadaFlag() {
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(-1.0, 1.0);
        glVertex2f(-0.33, 1.0);
        glVertex2f(-0.33, -1.0);
        glVertex2f(-1.0, -1.0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(0.33, 1.0);
        glVertex2f(1.0, 1.0);
        glVertex2f(1.0, -1.0);
        glVertex2f(0.33, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(-0.33, 1.0);
        glVertex2f(0.33, 1.0);
        glVertex2f(0.33, -1.0);
        glVertex2f(-0.33, -1.0);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.0, 0.6);
        glVertex2f(-0.1, 0.5);
        glVertex2f(-0.05, 0.5);
        glVertex2f(-0.15, 0.4);
        glVertex2f(-0.05, 0.4);
        glVertex2f(-0.1, 0.3);
        glVertex2f(0.0, 0.4);
        glVertex2f(0.1, 0.3);
        glVertex2f(0.05, 0.4);
        glVertex2f(0.15, 0.4);
        glVertex2f(0.05, 0.5);
        glVertex2f(0.1, 0.5);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    int margin = 20;
    int size = 140; // Original size (160) - margin
    int offset = margin / 2;

    glViewport(offset, offset, size, size);
    drawEuropeFlag();

    glViewport(offset, 160 + offset, size, size);
    drawNewZealandFlag();

    glViewport(160 + offset, 160 + offset, size, size);
    drawSamoaFlag();

    glViewport(160 + offset, offset, size, size);
    drawCanadaFlag();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(80, 50);
    glutCreateWindow("OpenGL Flags");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
