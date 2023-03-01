  #include <GL/glut.h>
  #include <stdio.h>
        void display()
        {

            ///glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清背景,殘影
            ///glPushMatrix();///備份的矩陣

                ///glutSolidTeapot( 0.3 );
                glBegin(GL_POLYGON);
            glVertex2f(-0.032, 0.172);
            glVertex2f(-0.100, 0.152);
            glVertex2f(-0.160, 0.148);
            glVertex2f(-0.200, 0.148);
            glVertex2f(-0.216, 0.128);
            glVertex2f(-0.236, 0.116);
            glVertex2f(-0.252, 0.048);
            glVertex2f(-0.264, 0.012);
            glVertex2f(-0.288, -0.048);
            glVertex2f(-0.292, -0.092);
            glVertex2f(-0.284, -0.132);
            glVertex2f(-0.244, -0.196);
            glVertex2f(-0.152, -0.232);
            glVertex2f(-0.072, -0.232);
            glVertex2f(0.052, -0.236);
            glVertex2f(0.148, -0.228);
            glVertex2f(0.220, -0.204);
            glVertex2f(0.284, -0.148);
            glVertex2f(0.296, -0.072);
            glVertex2f(0.272, 0.020);
            glVertex2f(0.244, 0.088);
            glVertex2f(0.220, 0.140);
            glVertex2f(0.168, 0.140);
            glVertex2f(0.108, 0.156);
            glVertex2f(0.048, 0.172);
            glVertex2f(0.020, 0.180);
            glEnd();
                glBegin(GL_POLYGON);
                glVertex2f(-0.196, 0.144);
                glVertex2f(-0.204, 0.188);
                glVertex2f(-0.216, 0.256);
                glVertex2f(-0.224, 0.344);
                glVertex2f(-0.224, 0.416);
                glVertex2f(-0.224, 0.460);
                glVertex2f(-0.208, 0.476);
                glVertex2f(-0.164, 0.464);
                glVertex2f(-0.160, 0.388);
                glVertex2f(-0.144, 0.324);
                glVertex2f(-0.132, 0.264);
                glVertex2f(-0.124, 0.200);
                glVertex2f(-0.128, 0.236);
                glEnd();
                glBegin(GL_POLYGON);
                    glVertex2f(0.080, 0.172);
                glVertex2f(0.084, 0.232);
                glVertex2f(0.080, 0.320);
                glVertex2f(0.100, 0.396);
                glVertex2f(0.124, 0.468);
                glVertex2f(0.172, 0.476);
                glVertex2f(0.180, 0.432);
                glVertex2f(0.184, 0.388);
                glVertex2f(0.184, 0.352);
                glVertex2f(0.184, 0.312);
                glVertex2f(0.168, 0.260);
                glVertex2f(0.168, 0.204);
                glVertex2f(0.168, 0.164);
                glEnd();




            ///glPopMatrix();///還原矩陣
            glutSwapBuffers();
           }

        void mouse(int button,int state,int x,int y)
        {
        float X= (x-250)/250.0;///printf("%d %d %d %d\n",button,state,x,y);
        float Y= -(y-250)/250.0;
        if(state==GLUT_DOWN){
                printf("    glVertex2f(%.3f, %.3f);\n", X,Y);//button(左右鍵等),state(按下去是0,1)
        }
        }
        int main(int argc, char *argv[] )
        {
            glutInit(&argc, argv);
            glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
            glutInitWindowSize(500,500);
            glutCreateWindow("week03");

            glutDisplayFunc(display);
            glutMouseFunc(mouse);///請mouse函式幫忙

            glutMainLoop();
        }
