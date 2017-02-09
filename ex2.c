//Lab EX3
//WAP to display a square of 4 different colors in the corners of square opengl window

#include<GL/freeglut.h>	
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_POLYGON);
glColor3f(0,1,0);
glVertex2f(-0.40,0);
//glColor3f(1,0,0);
glVertex2f(0,0.40);
//glColor3f(0,0,1);
glVertex2f(0.40,0);

//glColor3f(1,0,0);
glVertex2f(0.60,0);
glEnd();

glColor3f(1,1,1);
glRasterPos2f(-0.25,0.65);
glutBitmapString(GLUT_BITMAP_HELVETICA_18,(const unsigned char*)"");
glColor3f(1,1,1);
glRasterPos2f(-0.9,-0.85);
glutBitmapString(GLUT_BITMAP_HELVETICA_18,(const unsigned char*)"Aditya, 500040010, R134214005");
glFlush();
}
/*void mouse(int button,int state,int x,int y){
if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
{
 glutDisplayFunc(display); 
}
else(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
{
printf("I");
}
}
*/
int main(int argc, char** argv) {
glutInit(&argc,argv);
int mode = GLUT_RGB|GLUT_SINGLE;
   glutInitDisplayMode(mode);
 
   glutInitWindowSize(500,500);  
   glutCreateWindow("Green Square"); 
   glClearColor(0,0,0,0);         
   glutDisplayFunc(display);   
   //glutMouseFunc(mouse);   
   glutMainLoop();               
 return 0;
}

