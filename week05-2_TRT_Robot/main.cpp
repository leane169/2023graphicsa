#include <GL/glut.h>

float angle = 0; ///step02-1 宣告global全域變數 angle

void display()

{

    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ); ///清背景

    glColor3f(0,1,0);
    glPushMatrix();
        glutSolidCube(0.5);
        glPushMatrix();
            glTranslatef(0.25,0.25,0);
            glRotatef(angle,0,0,1);
            glTranslatef(0.25,0.25,0);
            ///glTranslatef(0.5,0.5,0);
            glColor3f(1,0,0);
            glutSolidCube(0.5);
    glPopMatrix();

    glutSwapBuffers();

    angle++; ///step02-1 把角度++

}

int main(int argc, char* argv[] )

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);

    glutCreateWindow("week04");



    glutDisplayFunc(display);

    glutIdleFunc(display); ///step02-1 有空idle時,就重畫畫面

    glutMainLoop();

}
