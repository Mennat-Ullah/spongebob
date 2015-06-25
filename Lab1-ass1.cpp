#include <iostream>
#include <windows.h>
#include <gl/gl.h>
#include <gl/glut.h>

using namespace std ;

#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glu32.lib")
#pragma comment(lib, "glut32.lib")

#define PI 3.1415926535897932384626433832795

/**
Sets the logical coordinate system we will use to specify
our drawings.
*/
void SetTransformations() {
	//set up the logical coordinate system of the window: [-100, 100] x [-100, 100]
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100, 100, -100, 100);
}

/**
Handles the paint event. This event is triggered whenever
our displayed graphics are lost or out-of-date.
ALL rendering code should be written here.
*/
void OnDisplay() {
	//set the background color to white
	glClearColor(1, 1, 1, 1);
	//fill the whole color buffer with the clear color
	glClear(GL_COLOR_BUFFER_BIT);
	SetTransformations();
	//ALL drawing code goes here

	// leg
	glBegin(GL_POLYGON); 
	
	glColor3f(0, 0, 0);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 5 + 25 , sin(i) * 5- 67 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(0, 0, 0);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 5 - 25 , sin(i) * 5- 67 , 0);
	glEnd();
	
	/*glBegin(GL_POLYGON); 
	glColor3f(1, 1, 0);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 5 + 74 , sin(i) * 5+ 16.5 , 0);
	glEnd();*/

	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex3f(-51, 81, 0);
	glVertex3f(51, 81, 0);
	glVertex3f(51, -41, 0);
	glVertex3f(-51, -41, 0);
	glColor3f(1, 1, 0);
	glVertex3f(-50, 80, 0);
	glVertex3f(50, 80, 0);
	glVertex3f(50, 0, 0);
	glVertex3f(-50, 0, 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(.737, .725, .172);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 8 + 25 , sin(i) * 8 , 0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex3f(-50, 0, 0);
	glVertex3f(50, 0, 0);
	glVertex3f(50, -10, 0);
	glVertex3f(-50, -10, 0);
	glColor3f(.47, 0, 0);
	glVertex3f(-50, -10, 0);
	glVertex3f(50, -10, 0);
	glVertex3f(50, -40, 0);
	glVertex3f(-50, -40, 0);
	/// el eed 
	glColor3f(1, 1, 0); 
	glVertex3f(-51, 13, 0);// yellow
	glVertex3f(-75, 13, 0);
	glVertex3f(-75, 20, 0);
	glVertex3f(-51, 20, 0);
	glVertex3f(51, 13, 0);// yellow
	glVertex3f(75, 13, 0);
	glVertex3f(75, 20, 0);
	glVertex3f(51, 20, 0);

	///////regle ////////
	glVertex3f(-29, -41, 0);// yellow
	glVertex3f(-21, -41, 0);
	glVertex3f(-21, -65, 0);
	glVertex3f(-29, -65, 0);
	glVertex3f(21, -41, 0);
	glVertex3f(29, -41, 0);
	glVertex3f(29, -65, 0);
	glVertex3f(21, -65, 0);

	glColor3f(0 , 0, 0); // black
	glVertex3f(-32, -41, 0);
	glVertex3f(-18, -41, 0);
	glVertex3f(-18, -47, 0);
	glVertex3f(-32, -47, 0);
	glVertex3f(32, -41, 0);
	glVertex3f(18, -41, 0);
	glVertex3f(18, -47, 0);
	glVertex3f(32, -47, 0);

	glColor3f(.47, 0, 0); // broun
	glVertex3f(-31, -39, 0);
	glVertex3f(-19, -39, 0);
	glVertex3f(-19, -46, 0);
	glVertex3f(-31, -46, 0);
	glVertex3f(31, -39, 0);
	glVertex3f(19, -39, 0);
	glVertex3f(19, -46, 0);
	glVertex3f(31, -46, 0);


	// gyob !
	glColor3f(0 , 0, 0);
	glVertex3f(-35, -13, 0);
	glVertex3f(-21, -13, 0);
	glVertex3f(-21, -19, 0);
	glVertex3f(-35, -19, 0);

	glVertex3f(-7, -13, 0);
	glVertex3f(7, -13, 0);
	glVertex3f(7, -19, 0);
	glVertex3f(-7, -19, 0);

	glVertex3f(21, -13, 0);
	glVertex3f(35, -13, 0);
	glVertex3f(35, -19, 0);
	glVertex3f(21, -19, 0);


	/// romosh
	glColor3f(0, 0, 0);
	glVertex3f(10, 56, 0);
	glVertex3f(11,56 , 0);
	glVertex3f(11, 66 , 0);
	glVertex3f(10, 66 , 0);

	glVertex3f(5, 55, 0);
	glVertex3f(6, 55 , 0);
	glVertex3f(6, 65, 0);
	glVertex3f(5, 65, 0);

	glVertex3f(15, 55, 0);
	glVertex3f(16, 55 , 0);
	glVertex3f(16, 65, 0);
	glVertex3f(15, 65, 0);

	glVertex3f(-10, 56, 0);
	glVertex3f(-11,56 , 0);
	glVertex3f(-11, 66 , 0);
	glVertex3f(-10, 66 , 0);

	glVertex3f(-5, 55, 0);
	glVertex3f(-6, 55 , 0);
	glVertex3f(-6, 65, 0);
	glVertex3f(-5, 65, 0);

	glVertex3f(-15, 55, 0);
	glVertex3f(-16, 55 , 0);
	glVertex3f(-16, 65, 0);
	glVertex3f(-15, 65, 0);

	// teeth
	glColor3f(1, 1, 1);
	glVertex3f(1, 20, 0);
	glVertex3f(1, 25 , 0);
	glVertex3f(5, 25, 0);
	glVertex3f(5, 20, 0);

	glVertex3f(-1, 20, 0);
	glVertex3f(-1, 25 , 0);
	glVertex3f(-5, 25, 0);
	glVertex3f(-5, 20, 0);

	
	glColor3f(0 ,0 ,0);
	/*glVertex3f(-12, 24.5, 0);
	glVertex3f(12, 25, 0);
	glVertex3f(12, 24.5, 0);
	glVertex3f(-12, 24, 0);*/
	glVertex3f(-12, 25, 0);
	glVertex3f(12, 25, 0);
	glVertex3f(12, 25.5, 0);
	glVertex3f(-12, 25.5, 0);

	glEnd();

	// leg curve
	glBegin(GL_POLYGON); 
	glColor3f(1, 1, 0);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 3.5 +25 , sin(i) * 3.5-64 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(1, 1, 0);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 3.5 -25 , sin(i) * 3.5-64 , 0);
	glEnd();
	// hande 
	glBegin(GL_POLYGON); 
	glColor3f(1, 1, 0);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 3.5 +75 , sin(i) * 3.5+ 16.5 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(1, 1, 0);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 3.5 -75 , sin(i) * 3.5+ 16.5 , 0);
	glEnd();
	
	// 7oboooooob
	glBegin(GL_POLYGON); 
	glColor3f(.737, .725, .172);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 5 - 30 , sin(i) * 5+ 40 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(.737, .725, .172);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 2 +40 , sin(i) * 2+ 40 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(.737, .725, .172);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 3 + 30 , sin(i) * 3+ 70 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(.737, .725, .172);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 2 - 40 , sin(i) * 2+ 70 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(.737, .725, .172);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 4 - 45 , sin(i) * 4 + 5  , 0);
	glEnd();

	//////*****eyes*****/////
	// left
	glBegin(GL_POLYGON); 
	glColor3f(0, 0, 0);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 11 - 10 , sin(i) * 11+ 50 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(1, 1, 1);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 10 - 10 , sin(i) * 10 + 50 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(0, 0, 0);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 5 - 8 , sin(i) * 5 + 44 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(0, .635, .909);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 4 - 8 , sin(i) * 4 + 44 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(0, 0, 0);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 2 - 8 , sin(i) * 2 + 44 , 0);
	glEnd();

	////////////////////////////////////////////
	// right
	glBegin(GL_POLYGON); 
	glColor3f(0, 0, 0);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 11 + 11.5, sin(i) * 11 + 50 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(1, 1, 1);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 10 + 11.5 , sin(i) * 10 + 50 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(0, 0, 0);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 5 + 14, sin(i) * 5 + 44 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(0, .635, .909);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 4 + 14 , sin(i) * 4 + 44 , 0);
	glEnd();
	glBegin(GL_POLYGON); 
	glColor3f(0, 0, 0);
	for(double i = 0; i < 2 * PI; i += PI /12 )
		glVertex3f(cos(i) * 2 + 14, sin(i) * 2 + 44 , 0);
	glEnd();
	///////////////////////////////////
	glFlush();
} 


/**
Creates the main window, registers event handlers, and
initializes OpenGL stuff.
*/
void InitGraphics(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	//Create an 800x600 window with its top-left corner at 	pixel (100, 100)
	glutInitWindowPosition(100, 100); //pass (-1, -1) for 	Window-Manager defaults
	glutInitWindowSize(800, 600);
	glutCreateWindow("OpenGL Lab");
	//OnDisplay will handle the paint event
	glutDisplayFunc(OnDisplay);
	glutMainLoop();
}
int main(int argc, char* argv[]) {
	InitGraphics(argc, argv);
	return 0;
}