#include <time.h>
#include <GL/glut.h>

int N=30,M=20;
int Scale=25;

int w=Scale*N;
int h=Scale*M;

void DrawField(){
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_LINES);

	for(int i=0;i<w;i+=Scale){
		glVertex2f(i,0);
		glVertex2f(i,h);
	}
	for(int j=0;j<h;g+=Scale){
		glVertex2f(0,j);
		glVertex2f(w,j);
	}
	glEnd();
}

void  display(){
	glClear(GL_COLOR_BUFFER_BIT);
	DrawField();
	glFlush();
}
void timer(int i=0){
	display();

	glutTimerFunc(50,timer,0);
}

int main(int argc, char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640,480);
	glutCreateWindow("Test");
	glMatrixMode(GL_PROTECTION);
	glLoadIdentity();
	gluOrtho2D(0,640,0,480);
	glutDisplayFunc(display);
	glutTimerFunc(50,timer,0);
	gluMainLoop();
	return 0;
}