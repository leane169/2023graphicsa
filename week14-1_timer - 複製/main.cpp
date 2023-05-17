///week14-2用鍵盤撥放
#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle,0,0,1);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void timer(int t)
{
    glutTimerFunc(500,timer,t+1);///設定下一個鬧鐘
    angle +=90;
    glutPostRedisplay();///重劃畫面
}
void keyboard(unsigned char key, int x, int y)
{
    glutTimerFunc(0,timer,0);
}
int main(int argc,char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week14");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutTimerFunc(2000, timer, 0);///設定timer函式
    glutMainLoop();
}
