#include <GL/glut.h>

float angle = 0; ///step02-1 �ŧiglobal�����ܼ� angle

void display()

{

    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ); ///�M�I��

    glColor3f(0,1,0);
    glPushMatrix();
        glTranslatef(0.8,0,0);
        glRotatef(angle, 0, 0, 1); ///step02-1 ���� angle ����
        glutSolidTeapot( 0.3 );
    glPopMatrix();

     glColor3f(1,0,0);
    glPushMatrix();
    glRotatef(angle, 0, 0, 1);
    glTranslatef(0.8,0,0);///step02-1 ���� angle ����
    glutSolidTeapot( 0.3 );
    glPopMatrix();

    glutSwapBuffers();

    angle++; ///step02-1 �⨤��++

}

int main(int argc, char* argv[] )

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);

    glutCreateWindow("week04");



    glutDisplayFunc(display);

    glutIdleFunc(display); ///step02-1 ����idle��,�N���e�e��

    glutMainLoop();

}
