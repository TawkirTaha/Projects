#include <windows.h>
#include <GL/glut.h>
#include <math.h>

//Total Road
void Road()
{
    glLineWidth(5);
    glColor3ub(45, 45, 45);
    glBegin(GL_POLYGON);
    glVertex2f(-30.0f, 10.0f);
    glVertex2f(0.0f, 10.0f);
    glVertex2f(30.0f, 10.0f);
    glVertex2f(30.0f, 0.0f);
    glVertex2f(30.0f, -10.0f);
    glVertex2f(0.0f, -10.0f);
    glVertex2f(-30.0f, -10.0f);
    glVertex2f(-30.0f, 0.0f);
    glEnd();

}

void sky()
{
    glColor3ub(25, 25, 112);
    glBegin(GL_POLYGON);
    glVertex2f(-30.0f, 10.0f);
    glVertex2f(-30.0f, 30.0f);
    glVertex2f(30.0f, 30.0f);
    glVertex2f(30.0f, 0.0f);
    glEnd();
}

 void moon(float radius, float cX, float cY)
   {
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(220, 220, 220);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);

        }
        glEnd();
   }

void RoadBorder()
{
    glLineWidth(5);
    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-30.0f, 10.0f);
    glVertex2f(0.0f, 10.0f);
    glVertex2f(30.0f, 10.0f);
    glVertex2f(30.0f, 0.0f);
    glVertex2f(30.0f, -10.0f);
    glVertex2f(0.0f, -10.0f);
    glVertex2f(-30.0f, -10.0f);
    glVertex2f(-30.0f, 0.0f);
    glEnd();
}

void RoadDevider()
{
     glLineWidth(5);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-30.0f,0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(30.0f, 0.0f);
    glEnd();
}

void full_build1()
{
    glColor3ub(216, 216, 216);
    glBegin(GL_POLYGON);
    glVertex2f(-25.0f, 10.0f);
    glVertex2f(-25.0f, 20.0f);
    glVertex2f(-15.0f, 20.0f);
    glVertex2f(-15.0f, 10.0f);
    glEnd();
}
void full_build1_border()
{
    glLineWidth(2);
    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-25.0f, 10.0f);
    glVertex2f(-25.0f, 20.0f);
    glVertex2f(-15.0f, 20.0f);
    glVertex2f(-15.0f, 10.0f);
    glEnd();
}

void building1_window1()
{
     glColor3ub(192, 192, 192);
     glBegin(GL_POLYGON);
     glVertex2f(-24.0f, 18.0f);
     glVertex2f(-22.0f, 18.0f);
     glVertex2f(-22.0f, 16.0f);
     glVertex2f(-24.0f, 16.0f);
     glEnd();
}
void building1_window2()
{
     glColor3ub(192, 192, 192);
     glBegin(GL_POLYGON);
     glVertex2f(-18.0f, 18.0f);
     glVertex2f(-16.0f, 18.0f);
     glVertex2f(-16.0f, 16.0f);
     glVertex2f(-18.0f, 16.0f);
     glEnd();
}

void building1_Door()
{
     glColor3ub(50, 50, 50);
     glBegin(GL_POLYGON);
     glVertex2f(-22.0f, 10.0f);
     glVertex2f(-22.0f, 12.0f);
     glVertex2f(-18.0f, 12.0f);
     glVertex2f(-18.0f, 10.0f);
     glEnd();
}

void Bulding1()
{
   full_build1();
   full_build1_border();
   building1_window1();
   building1_window2();
   building1_Door();
}


void full_build2()
{
    glColor3ub(216, 216, 216);
    glBegin(GL_POLYGON);
    glVertex2f(-5.0f, 10.0f);
    glVertex2f(-5.0f, 25.0f);
    glVertex2f(5.0f, 25.0f);
    glVertex2f(5.0f, 10.0f);
    glEnd();
}

void full_build2_border()
{
     glLineWidth(2);
    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-5.0f, 10.0f);
    glVertex2f(-5.0f, 25.0f);
    glVertex2f(5.0f, 25.0f);
    glVertex2f(5.0f, 10.0f);
    glEnd();
}

void building2_window1()
{
     glColor3ub(192, 192, 192);
     glBegin(GL_POLYGON);
     glVertex2f(-4.0f, 12.0f);
     glVertex2f(-4.0f, 14.0f);
     glVertex2f(-2.0f, 14.0f);
     glVertex2f(-2.0f, 12.0f);
     glEnd();
}
void building2_window2()
{
     glColor3ub(192, 192, 192);
     glBegin(GL_POLYGON);
     glVertex2f(2.0f, 12.0f);
     glVertex2f(2.0f, 14.0f);
     glVertex2f(4.0f, 14.0f);
     glVertex2f(4.0f, 12.0f);
     glEnd();
}
void building2_window3()
{
     glColor3ub(192, 192, 192);
     glBegin(GL_POLYGON);
     glVertex2f(-4.0f, 17.0f);
     glVertex2f(-4.0f, 19.0f);
     glVertex2f(-2.0f, 19.0f);
     glVertex2f(-2.0f, 17.0f);
     glEnd();
}
void building2_window4()
{
     glColor3ub(192, 192, 192);
     glBegin(GL_POLYGON);
     glVertex2f(2.0f, 17.0f);
     glVertex2f(2.0f, 19.0f);
     glVertex2f(4.0f, 19.0f);
     glVertex2f(4.0f, 17.0f);
     glEnd();
}
void building2_window5()
{
     glColor3ub(192, 192, 192);
     glBegin(GL_POLYGON);
     glVertex2f(-4.0f, 22.0f);
     glVertex2f(-4.0f, 24.0f);
     glVertex2f(-2.0f, 24.0f);
     glVertex2f(-2.0f, 22.0f);
     glEnd();
}
void building2_window6()
{
     glColor3ub(192, 192, 192);
     glBegin(GL_POLYGON);
     glVertex2f(2.0f, 22.0f);
     glVertex2f(2.0f, 24.0f);
     glVertex2f(4.0f, 24.0f);
     glVertex2f(4.0f, 22.0f);
     glEnd();
}
void building2_Door()
{
     glColor3ub(50, 50, 50);
     glBegin(GL_POLYGON);
     glVertex2f(-1.0f, 10.0f);
     glVertex2f(-1.0f, 12.0f);
     glVertex2f(1.0f, 12.0f);
     glVertex2f(1.0f, 10.0f);
     glEnd();
}


void Building2()
{
    full_build2();
   full_build2_border();
   building2_window1();
   building2_window2();
   building2_window3();
   building2_window4();
   building2_window5();
   building2_window6();
   building2_Door();
}

void full_build3()
{
     glColor3ub(216, 216, 216);
    glBegin(GL_POLYGON);
    glVertex2f(15.0f, 10.0f);
    glVertex2f(15.0f, 20.0f);
    glVertex2f(25.0f, 20.0f);
    glVertex2f(25.0f, 10.0f);
    glEnd();
}

void full_build3_border()
{
     glLineWidth(2);
    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(15.0f, 10.0f);
    glVertex2f(15.0f, 20.0f);
    glVertex2f(25.0f, 20.0f);
    glVertex2f(25.0f, 10.0f);
    glEnd();
}
void building3_window1()
{
     glColor3ub(192, 192, 192);
     glBegin(GL_POLYGON);
     glVertex2f(16.0f, 12.0f);
     glVertex2f(16.0f, 14.0f);
     glVertex2f(18.0f, 14.0f);
     glVertex2f(18.0f, 12.0f);
     glEnd();
}
void building3_window2()
{
     glColor3ub(192, 192, 192);
     glBegin(GL_POLYGON);
     glVertex2f(22.0f, 12.0f);
     glVertex2f(22.0f, 14.0f);
     glVertex2f(24.0f, 14.0f);
     glVertex2f(24.0f, 12.0f);
     glEnd();
}
void building3_window3()
{
     glColor3ub(192, 192, 192);
     glBegin(GL_POLYGON);
     glVertex2f(16.0f, 17.0f);
     glVertex2f(16.0f, 19.0f);
     glVertex2f(18.0f, 19.0f);
     glVertex2f(18.0f, 17.0f);
     glEnd();
}

void building3_window4()
{
     glColor3ub(192, 192, 192);
     glBegin(GL_POLYGON);
     glVertex2f(22.0f, 17.0f);
     glVertex2f(22.0f, 19.0f);
     glVertex2f(24.0f, 19.0f);
     glVertex2f(24.0f, 17.0f);
     glEnd();
}
void building3_Door()
{
     glColor3ub(50, 50, 50);
     glBegin(GL_POLYGON);
     glVertex2f(19.0f, 10.0f);
     glVertex2f(19.0f, 12.0f);
     glVertex2f(21.0f, 12.0f);
     glVertex2f(21.0f, 10.0f);
     glEnd();
}
void Bulding3()
{
   full_build3();
   full_build3_border();
   building3_window1();
   building3_window2();
    building3_window3();
    building3_window4();
    building3_Door();
}




void tree_wood()
{
     glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2f(-27.0f, -30.0f);
    glVertex2f(-27.0f, -18.0f);
    glVertex2f(-25.0f, -18.0f);
    glVertex2f(-25.0f, -30.0f);
    glEnd();
}
 void tree_circle(float radius, float cX, float cY)
   {
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(34, 85, 34);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);

        }
        glEnd();
   }



void lampost1_body()
{
    glColor3ub(54, 69, 79);
    glBegin(GL_POLYGON);
    glVertex2f(-12.0f, 10.0f);
    glVertex2f(-12.0f, 18.0f);
    glVertex2f(-11.0f, 18.0f);
    glVertex2f(-11.0f, 10.0f);
    glEnd();
}

void lampost1_light1()
{
     glColor3ub(255, 234, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-12.0f, 18.0f);
    glVertex2f(-14.0f, 18.0f);
    glVertex2f(-14.0f, 19.0f);
    glVertex2f(-13.0f, 19.0f);
    glVertex2f(-13.0f, 20.0f);
    glVertex2f(-10.0f, 20.0f);
    glVertex2f(-10.0f, 19.0f);
    glVertex2f(-9.0f, 19.0f);
    glVertex2f(-9.0f, 18.0f);
    glVertex2f(-12.0f, 19.0f);
    glEnd();
}

void lampost1()
{
  lampost1_body();
  lampost1_light1();
}
void lampost2_body()
{
     glColor3ub(54, 69, 79);
    glBegin(GL_POLYGON);
    glVertex2f(8.0f, 10.0f);
    glVertex2f(8.0f, 18.0f);
    glVertex2f(9.0f, 18.0f);
    glVertex2f(9.0f, 10.0f);
    glEnd();

}
void lampost2_light2()
{
     glColor3ub(255, 234, 0);
    glBegin(GL_POLYGON);
    glVertex2f(8.0f, 18.0f);
    glVertex2f(6.0f, 18.0f);
    glVertex2f(6.0f, 19.0f);
    glVertex2f(7.0f, 19.0f);
    glVertex2f(7.0f, 20.0f);
    glVertex2f(10.0f, 20.0f);
    glVertex2f(10.0f, 19.0f);
    glVertex2f(11.0f, 19.0f);
    glVertex2f(11.0f, 18.0f);
    glVertex2f(8.0f, 18.0f);
    glEnd();
}
void lampost2()
{
    lampost2_body();
    lampost2_light2();
}

 void cloud_circle(float radius, float cX, float cY)
   {
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(255, 255, 240);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);

        }
        glEnd();
   }


void cloud1()
{
    cloud_circle(1.5,-25.0,25.0);
    cloud_circle(1.5,-26.8,25.0);
    cloud_circle(1.5,-26.0,26.3);

}

void clude2()
{
    cloud_circle(1.5,20.0,25.0);
    cloud_circle(1.5,21.8,25.0);
    cloud_circle(1.5,21.0,26.3);
}
//Problem Arise

void Bus1_body()
{
    glColor3ub(255, 204, 0);
    glBegin(GL_POLYGON);
    glVertex2f(10.0f, 3.0f);
    glVertex2f(10.0f, 8.0f);
    glVertex2f(22.0f, 8.0f);
    glVertex2f(22.0f, 3.0f);
    glVertex2f(10.0f, 3.0f);
    glEnd();
}
void Bus1_border()
{
    glLineWidth(10);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINE_LOOP);
    glVertex2f(10.0f, 6.0f);
    glVertex2f(22.0f, 6.0f);
    glEnd();

}
void Bus1_wheel_box1()
{
     glColor3ub(128, 128, 128);
    glBegin(GL_POLYGON);
    glVertex2f(20.0f, 3.0f);
    glVertex2f(20.0f, 4.5f);
    glVertex2f(17.0f, 4.5f);
    glVertex2f(17.0f, 3.0f);
    glEnd();
}
void Bus1_wheel_box2()
{
     glColor3ub(128, 128, 128);
    glBegin(GL_POLYGON);
    glVertex2f(15.0f, 3.0f);
    glVertex2f(15.0f, 4.5f);
    glVertex2f(12.0f, 4.5f);
    glVertex2f(12.0f, 3.0f);
    glEnd();
}

 void bus1_wheel(float radius, float cX, float cY)
   {
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(20, 20, 20);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);

        }
        glEnd();
   }
void Bus_1()
{
  Bus1_body();
  Bus1_border();
  Bus1_wheel_box1();
  Bus1_wheel_box2();
  // Back Wheel
  bus1_wheel(1.2,18.5,3.0);
  // Font Wheel
  bus1_wheel(1.2,13.5,3.0);
}

void Bus2_body()
{
    glColor3ub(0, 75, 160);
    glBegin(GL_POLYGON);
    glVertex2f(-20.0f, -7.0f);
    glVertex2f(-20.0f, -2.0f);
    glVertex2f(-8.0f, -2.0f);
    glVertex2f(-8.0f, -7.0f);
    glVertex2f(-20.0f, -7.0f);
    glEnd();
}
void Bus2_border()
{
    glLineWidth(10);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-20.0f, -4.0f);
    glVertex2f(-8.0f, -4.0f);
    glEnd();

}
void Bus2_wheel_box1()
{
    glColor3ub(128, 128, 128);
    glBegin(GL_POLYGON);
    glVertex2f(-10.0f, -7.0f);
    glVertex2f(-10.0f, -5.5f);
    glVertex2f(-13.0f, -5.5f);
    glVertex2f(-13.0f, -7.0f);
    glEnd();
}

void Bus2_wheel_box2()
{
     glColor3ub(128, 128, 128);
    glBegin(GL_POLYGON);
    glVertex2f(-15.0f, -7.0f);
    glVertex2f(-15.0f, -5.5f);
    glVertex2f(-18.0f, -5.5f);
    glVertex2f(-18.0f, -7.0f);
    glEnd();
}
void Bus_2()
{
   Bus2_body();
   Bus2_border();
   Bus2_wheel_box1();
   Bus2_wheel_box2();
  // Front Wheel
   bus1_wheel(1.2,-16.5,-7.0);
  // Back Wheel
   bus1_wheel(1.2,-11.5,-7.0);
}


void display() {

	glClear(GL_COLOR_BUFFER_BIT);
	// for sky
	sky();


	// for Moon
	 moon(2.0,-10.0,27.0);
	//for Road
	Road();
	RoadDevider();
	RoadBorder();
	//Building1
	Bulding1();
	Building2();
  Bulding3();



    // For Lamp=Post
    lampost1();
    lampost2();

    // Cloud_1
    cloud1();

    //Cloud-2
    clude2();

    //Bus1
    Bus_1();

    //Bus2
    Bus_2();



	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(700,700);
    glutCreateWindow("City View");
	glClearColor(1.0,1.0,1.0,1.0);
	gluOrtho2D(-30.0,30.0,-20.0,30.0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
