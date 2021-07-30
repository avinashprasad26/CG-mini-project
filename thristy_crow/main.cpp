#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#include<string.h>
#include<time.h>

float theta=0.0;
int x=0,m=0,y=0,g=0,h=0,j=0,k=0,o=0,p=0,r=0,s=0,u=0,v=0;

void delay(float secs)
{
    float end = clock()/CLOCKS_PER_SEC + secs;
    while((clock()/CLOCKS_PER_SEC) < end);
}

void welcomeDisplay()  // First display of the project
{
    glClearColor(1.0,0.5,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-350.0,450.0,0);
    char message1[] = "COMPUTER GRAPHICS AND VISUALISATION MINI PROJECT";
    for(int k=0;k<strlen(message1);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message1[k]);
    }

    glRasterPos3f(0.0,350.0,0);
    char message2[] = "( 18CSL67 )";
    for(int k=0;k<strlen(message2);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message2[k]);
    }

    glColor3f(0.0,0.0,0.0);
    glRasterPos3f(-35.0,250.0,0);
    char message3[] = "THIRSTY CROW";
    for(int k=0;k<strlen(message3);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message3[k]);
    }

    glColor3f(0.0,0.0,0.0);
    glRasterPos3f(-800.0,100.0,0);
    char message4[] = "BY -";
    for(int k=0;k<strlen(message4);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message4[k]);
    }

    glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-800.0,50.0,0);
    char message5[] = "AVINASH PRASAD";
    for(int k=0;k<strlen(message5);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message5[k]);
    }

    glRasterPos3f(-770.0,0.0,0);
    char message6[] = "1KS18CS008";
    for(int k=0;k<strlen(message6);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message6[k]);
    }

    glColor3f(0.0,0.0,0.0);
    glRasterPos3f(550.0,100.0,0);
    char message7[] = "GUIDED BY - ";
    for(int k=0;k<strlen(message7);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message7[k]);
    }

    glColor3f(1.0,1.0,1.0);
    glRasterPos3f(550.0,50.0,0);
    char message8[] = "DR. DAYANANDA R B";
    for(int k=0;k<strlen(message8);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message8[k]);
    }

    glColor3f(0.0,0.0,0.0);
    glRasterPos3f(0.0,-50.0,0);
    char message9[] = "Description:";
    for(int k=0;k<strlen(message9);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message9[k]);
    }

    glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-250.0,-100.0,0);
    char message10[] = "To graphically represent a tale that depicts the story of ";
    for(int k=0;k<strlen(message10);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message10[k]);
    }

    glColor3f(1.0,0.0,0.0);
    glRasterPos3f(-20.0,-150.0,0);
    char message11[] = "THIRSTY CROW";
    for(int k=0;k<strlen(message11);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message11[k]);
    }

    glColor3f(0.0,0.0,0.0);
    glRasterPos3f(0.0,-250.0,0);
    char message12[] = "INSTRUCTION:";
    for(int k=0;k<strlen(message12);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message12[k]);
    }

    glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-200.0,-330.0,0);
    char message13[] = "1. PRESS 'SPACEBAR' TO START THE PROJECT";
    for(int k=0;k<strlen(message13);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message13[k]);
    }

    glRasterPos3f(-200.0,-380.0,0);
    char message15[] = "2. PRESS 1,2,3,4,5,6,7,8,9 TO CONTINUE THE STORY";
    for(int k=0;k<strlen(message15);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message15[k]);
    }

    glRasterPos3f(-200.0,-430.0,0);
    char message16[] = "3. PRESS 'ESC' TO STOP THE PROJECT";
    for(int k=0;k<strlen(message16);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message16[k]);
    }

    glutPostRedisplay();
    glutSwapBuffers();
}

void storypage()
{
    glClearColor(1.0,0.5,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0,0.0,0.0);
    glRasterPos3f(-100.0,480.0,0);
    char message1[] = "STORY:";
    for(int k=0;k<strlen(message1);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message1[k]);
    }

    glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-800.0,350.0,0);
    char message2[] = "It was a hot summer’s day. A thirsty crow was flying in search of water in the desert. The crow flew over the desert.";
    for(int k=0;k<strlen(message2);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message2[k]);
    }

    glRasterPos3f(-800.0,300.0,0);
    char message3[] = "But he didn’t find any water. After a long time, he came across a tree. Under one of the cactus on the desert was a pot of water.";
    for(int k=0;k<strlen(message3);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message3[k]);
    }

    glRasterPos3f(-800.0,200.0,0);
    char message4[] = "Happy that he found some water finally, he swooped down to the tree and then down to the ground. He quickly moved towards the ";
    for(int k=0;k<strlen(message4);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message4[k]);
    }

    glRasterPos3f(-800.0,150.0,0);
    char message5[] = "pot and looked inside. There was very little water in the pot. The crow put his peak inside the pot but could not reach the water.";
    for(int k=0;k<strlen(message5);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message5[k]);
    }

    glRasterPos3f(-800.0,100.0,0);
    char message6[] = "The water level was too low, and the narrow opening prevented his neck from going all the way down.";
    for(int k=0;k<strlen(message6);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message6[k]);
    }

    glRasterPos3f(-800.0,0.0,0);
    char message7[] = "He tried to push the vessel down to let the water out, but it was too heavy. The crow was disappointed. He was really thirsty";
    for(int k=0;k<strlen(message7);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message7[k]);
    }

    glRasterPos3f(-800.0,-50.0,0);
    char message8[] = "and needed a drink of water badly. He could have given up and flew.";
    for(int k=0;k<strlen(message8);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message8[k]);
    }

    glRasterPos3f(-800.0,-150.0,0);
    char message9[] = "But he didn’t. Instead, he looked around and thought, “What else can I do?” He saw that there were a lot of pebbles on the ground.";
    for(int k=0;k<strlen(message9);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message9[k]);
    }

    glRasterPos3f(-800.0,-200.0,0);
    char message10[] = "And, he had an idea! He collected a pebble and put it into the pot. He collected another pebble and another and put them all in ";
    for(int k=0;k<strlen(message10);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message10[k]);
    }

    glRasterPos3f(-800.0,-250.0,0);
    char message11[] = "the pot. As he added more and more stones, the water level came up to the brim. when the water level came up, the crow drank the";
    for(int k=0;k<strlen(message11);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message11[k]);
    }

    glRasterPos3f(-800.0,-300.0,0);
    char message12[] = "water and flew away happily. ";
    for(int k=0;k<strlen(message12);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message12[k]);
    }

    glColor3f(1.0,0.0,0.0);
    glRasterPos3f(-250.0,-360.0,0);
    char message13[] = "NOW WE WILL SEE THIS STORY GRAPHICALLY";
    for(int k=0;k<strlen(message13);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message13[k]);
    }

    glColor3f(0.0,0.0,0.0);
    glRasterPos3f(-700.0,-420.0,0);
    char message14[] = "PRESS 1,THEN 2,THEN 3,THEN 4,THEN 5,THEN 6,THEN 7,THEN 8,THEN 9 TO CONTINUE THE STORY";
    for(int k=0;k<strlen(message14);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message14[k]);
    }
    glutSwapBuffers();

}

void pot(void)
{
    glColor3f(0.4,0.2,0.1);
    glBegin(GL_POLYGON); // pot top
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+45*cos(theta),-260+15*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);  // pot neck
    glVertex2f(35,-300);
    glVertex2f(35,-260);
    glVertex2f(-35,-260);
    glVertex2f(-35,-300);
    glEnd();

    glBegin(GL_POLYGON); // pot bottom
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+95*cos(theta),-380+90*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // pot end
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+35*cos(theta),-465+10*sin(theta));
    }
    glEnd();
}

void lesswaterpot()
{
    glColor3f(0.4,0.2,0.1);
    glBegin(GL_POLYGON); // pot bottom
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+95*cos(theta),0+90*sin(theta));
    }
    glEnd();
    glColor3f(0.8,0.4,0.2);
    glBegin(GL_POLYGON); // pot top
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+45*cos(theta),0+40*sin(theta));
    }
    glEnd();
    glColor3f(0.0,0.8,0.9);
    glBegin(GL_POLYGON); // water
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+20*cos(theta),0+15*sin(theta));
    }
    glEnd();
}

void fullwaterpot()
{
    glColor3f(0.4,0.2,0.1);
    glBegin(GL_POLYGON); // pot bottom
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+95*cos(theta),0+90*sin(theta));
    }
    glEnd();
    glColor3f(0.0,0.8,0.9);
    glBegin(GL_POLYGON); // water
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+45*cos(theta),0+40*sin(theta));
    }
    glEnd();
    glColor3f(0.35,0.35,0.35);
    glBegin(GL_POLYGON); // stone 1
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+15*cos(theta),0+7.5*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON); // stone 2
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(10+15*cos(theta),20+7.5*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON); // stone 3
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(20+15*cos(theta),-20+7.5*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON); // stone 4
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-22+15*cos(theta),16+7.5*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON); // stone 5
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-20+15*cos(theta),-16+7.5*sin(theta));
    }
    glEnd();
}

void crow(void)
{
    glBegin(GL_POLYGON); // crow head
    glColor3f(0.0,0.0,0.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+20*cos(theta),0+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // crow eye
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+5*cos(theta),0+3.5*sin(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glPointSize(3.0);  // crow eye ball
    glBegin(GL_POINTS);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_TRIANGLES);  // crow peak
    glVertex2f(10,15);
    glVertex2f(40,10);
    glVertex2f(10,-15);
    glEnd();

    glBegin(GL_POLYGON); // crow stomach
    for(int i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-30+35*cos(theta),-15-35*sin(theta));
    }
    glEnd();

    glBegin(GL_TRIANGLES);  // crow tail
    glVertex2f(-60,-17);
    glVertex2f(-115,0);
    glVertex2f(-110,-20);
    glEnd();

    glBegin(GL_POLYGON);  // crow legs
    glVertex2f(-30,-30);
    glVertex2f(-20,-30);
    glVertex2f(-20,-65);
    glVertex2f(-30,-65);
    glEnd();
}

void crowstone()
{
     glBegin(GL_POLYGON); // crow head
    glColor3f(0.0,0.0,0.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+20*cos(theta),0+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // crow eye
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+5*cos(theta),0+3.5*sin(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glPointSize(3.0);  // crow eye ball
    glBegin(GL_POINTS);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_TRIANGLES);  // crow peak
    glVertex2f(10,15);
    glVertex2f(40,10);
    glVertex2f(10,-15);
    glEnd();

    glColor3f(0.35,0.35,0.35);
    glBegin(GL_POLYGON); // stone in crow peak
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(35+15*cos(theta),10+7.5*sin(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON); // crow stomach
    for(int i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-30+35*cos(theta),-15-35*sin(theta));
    }
    glEnd();

    glBegin(GL_TRIANGLES);  // crow tail
    glVertex2f(-60,-17);
    glVertex2f(-115,0);
    glVertex2f(-110,-20);
    glEnd();

    glBegin(GL_POLYGON);  // crow legs
    glVertex2f(-30,-30);
    glVertex2f(-20,-30);
    glVertex2f(-20,-65);
    glVertex2f(-30,-65);
    glEnd();
}

void reversecrow()
{
    glBegin(GL_POLYGON); // crow head
    glColor3f(0.0,0.0,0.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+20*cos(theta),0+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // crow eye
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+5*cos(theta),0+3.5*sin(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glPointSize(3.0);  // crow eye ball
    glBegin(GL_POINTS);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_TRIANGLES);  // crow peak
    glVertex2f(-10,15);
    glVertex2f(-40,10);
    glVertex2f(-10,-15);
    glEnd();

    glBegin(GL_POLYGON); // crow stomach
    for(int i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(35+35*cos(theta),-10-35*sin(theta));
    }
    glEnd();

    glBegin(GL_TRIANGLES);  // crow tail
    glVertex2f(63,-10);
    glVertex2f(120,0);
    glVertex2f(115,-20);
    glEnd();

    glBegin(GL_POLYGON);  // crow legs
    glVertex2f(40,-30);
    glVertex2f(30,-30);
    glVertex2f(30,-65);
    glVertex2f(40,-65);
    glEnd();
}

void crowright()
{
     glBegin(GL_POLYGON); // crow head
    glColor3f(0.0,0.0,0.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+20*cos(theta),0+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // crow eye
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+5*cos(theta),0+3.5*sin(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glPointSize(3.0);  // crow eye ball
    glBegin(GL_POINTS);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_TRIANGLES);  // crow peak
    glVertex2f(10,15);
    glVertex2f(40,10);
    glVertex2f(10,-15);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON); // crow stomach
    for(int i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-30+35*cos(theta),-15-35*sin(theta));
    }
    glEnd();

    glBegin(GL_TRIANGLES);  // crow tail
    glVertex2f(-60,-17);
    glVertex2f(-115,0);
    glVertex2f(-110,-20);
    glEnd();

    glBegin(GL_POLYGON);  // crow legs
    glVertex2f(-30,-30);
    glVertex2f(-20,-30);
    glVertex2f(-20,-65);
    glVertex2f(-30,-65);
    glEnd();
}

void crowleft()
{
    glBegin(GL_POLYGON); // crow head
    glColor3f(0.0,0.0,0.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+20*cos(theta),0+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // crow eye
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+5*cos(theta),0+3.5*sin(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glPointSize(3.0);  // crow eye ball
    glBegin(GL_POINTS);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_TRIANGLES);  // crow peak
    glVertex2f(-10,15);
    glVertex2f(-40,10);
    glVertex2f(-10,-15);
    glEnd();

    glColor3f(0.35,0.35,0.35);
    glBegin(GL_POLYGON); // stone in crow peak
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-35+15*cos(theta),10+7.5*sin(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON); // crow stomach
    for(int i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(35+35*cos(theta),-10-35*sin(theta));
    }
    glEnd();

    glBegin(GL_TRIANGLES);  // crow tail
    glVertex2f(63,-10);
    glVertex2f(120,0);
    glVertex2f(115,-20);
    glEnd();

    glBegin(GL_POLYGON);  // crow legs
    glVertex2f(40,-30);
    glVertex2f(30,-30);
    glVertex2f(30,-65);
    glVertex2f(40,-65);
    glEnd();
}

void stone(void)
{
    glColor3f(0.35,0.35,0.35);
    glBegin(GL_POLYGON); // stone 1
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-720+15*cos(theta),-250+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 2
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-750+15*cos(theta),-235+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 3
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-765+15*cos(theta),-265+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 4
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-645+15*cos(theta),-245+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 5
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-630+15*cos(theta),-260+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 6
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-700+15*cos(theta),-280+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 6
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-670+15*cos(theta),-290+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 7
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-800+15*cos(theta),-150+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 8
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-715+15*cos(theta),-180+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 9
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(500+15*cos(theta),-350+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 10
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(650+15*cos(theta),-400+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 11
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(570+15*cos(theta),-300+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // big stone
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-720+50*cos(theta),-100+31*sin(theta));
    }
    glColor3f(0.1,0.1,0.1);
    glBegin(GL_POLYGON); // big stone shadow
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-720+50*cos(theta),-85+31*sin(theta));
    }
    glEnd();

}

void birds(void)
{
    glLineWidth(1.5);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(0.0,400.0);  // bird_one
    glVertex2f(50.0,440.0);
    glVertex2f(50.0,440.0);
    glVertex2f(90.0,420.0);
    glVertex2f(0.0,400.0);
    glVertex2f(-50.0,440.0);
    glVertex2f(-50.0,440.0);
    glVertex2f(-90.0,420.0);
    glVertex2f(-150.0,350.0);  // bird_two
    glVertex2f(-200.0,390.0);
    glVertex2f(-200.0,390.0);
    glVertex2f(-240.0,370.0);
    glVertex2f(-150.0,350.0);
    glVertex2f(-100.0,390.0);
    glVertex2f(-100.0,390.0);
    glVertex2f(-60.0,370.0);
    glVertex2f(150.0,350.0);  // bird_three
    glVertex2f(200.0,390.0);
    glVertex2f(200.0,390.0);
    glVertex2f(240.0,370.0);
    glVertex2f(150.0,350.0);
    glVertex2f(100.0,390.0);
    glVertex2f(100.0,390.0);
    glVertex2f(60.0,370.0);
    glEnd();
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(0.0,400.0);  // 1
    glVertex2f(-150.0,350.0);  // 2
    glVertex2f(150.0,350.0);  // 3
    glEnd();
}

void smallcactus(void)
{
    glLineWidth(4.5);
    glColor3f(0.0,0.3,0.0);
    glBegin(GL_LINES);  // right side cactus
    glVertex2f(365.0,-55.0);
    glVertex2f(365.0,-12.0);
    glVertex2f(365.0,-30.0);
    glVertex2f(380.0,-30.0);
    glVertex2f(380.0,-30.0);
    glVertex2f(380.0,-15.0);
    glVertex2f(365.0,-40.0);
    glVertex2f(350.0,-40.0);
    glVertex2f(350.0,-40.0);
    glVertex2f(350.0,-20.0);
    glEnd();
    glBegin(GL_LINES);  // left side cactus
    glVertex2f(-450.0,-43.0);
    glVertex2f(-450.0,0.0);
    glVertex2f(-450.0,-28.0);
    glVertex2f(-435.0,-28.0);
    glVertex2f(-435.0,-28.0);
    glVertex2f(-435.0,-8.0);
    glVertex2f(-450.0,-18.0);
    glVertex2f(-465.0,-18.0);
    glVertex2f(-465.0,-18.0);
    glVertex2f(-465.0,-3.0);
    glEnd();
}

void colour(void) // color
{
    glBegin(GL_POLYGON);  // color for sky
    glColor3f(0.8,0.9,1.0);
    glVertex2d(-960,-540);
    glVertex2d(960,-540);
    glColor3f(0.4,0.4,1.0);
    glVertex2d(960,540);
    glVertex2d(-960,540);
    glEnd();

    glBegin(GL_POLYGON); // color for sun
    glColor3f(1.0,0.6,0.0);
    for(int i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+260*cos(theta),-100+220*sin(theta));
        glColor3f(1.0,0.4,0.0);

    }
    glEnd();

    glColor3f(0.9,0.5,0.1);  // color for desert
    glBegin(GL_POLYGON);
    glVertex2d(960,-25);
    glVertex2d(900,-28);
    glVertex2d(650,-40);
    glVertex2d(600,-43);
    glVertex2d(500,-45);
    glVertex2d(0,-78);
    glVertex2d(960,-450);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(960,-540);
    glVertex2d(960,-155);
    glVertex2d(750,-140);
    glVertex2d(750,-280);
    glVertex2d(650,-280);
    glVertex2d(650,-200);
    glVertex2d(500,-200);
    glVertex2d(500,-120);
    glVertex2d(-690,-20);
    glVertex2d(-690,-100);
    glVertex2d(-750,-100);
    glVertex2d(-750,-20);
    glVertex2d(-960,0);
    glVertex2d(-960,-540);
    glEnd();

    glColor3f(0.0,0.5,0.0);  // color for cactus
    glBegin(GL_POLYGON);
    glVertex2d(650,-280);
    glVertex2d(750,-280);
    glVertex2d(750,100);
    glVertex2d(650,100);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(750,-80);
    glVertex2d(900,-80);
    glVertex2d(800,0);
    glVertex2d(750,0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(900,-80);
    glVertex2d(900,50);
    glVertex2d(800,50);
    glVertex2d(800,0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(650,-200);
    glVertex2d(500,-200);
    glVertex2d(600,-120);
    glVertex2d(650,-120);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(500,-200);
    glVertex2d(500,-15);
    glVertex2d(600,-15);
    glVertex2d(600,-120);
    glVertex2d(650,-120);
    glEnd();

    //color for tree side branch
    glColor3f(0.5,0.2,0.0);
    glBegin(GL_POLYGON);  //right side branch
    glVertex2f(-710,85);
    glVertex2f(-655,120);
    glVertex2f(-635,105);
    glVertex2f(-710,60);
    glEnd();
    glBegin(GL_POLYGON);  //left side branch
    glVertex2d(-750,100);
    glVertex2d(-850,150);
    glVertex2d(-750,80);
    glEnd();

    glBegin(GL_POLYGON);  //trunk
    glVertex2d(-750,-100);
    glVertex2d(-750,220);
    glVertex2d(-715,200);
    glVertex2d(-690,220);
    glVertex2d(-690,99);
    glVertex2d(-690,72);
    glVertex2d(-690,-100);
    glEnd();

    glBegin(GL_POLYGON);  //left branch
    glVertex2d(-750,220);
    glVertex2d(-850,250);
    glVertex2d(-850,260);
    glVertex2d(-900,300);
    glVertex2d(-830,260);
    glVertex2d(-750,235);
    glVertex2d(-728,230);
    glVertex2d(-715,200);
    glEnd();
    glBegin(GL_POLYGON); //left branch top
    glVertex2d(-850,250);
    glVertex2d(-900,240);
    glVertex2d(-850,260);
    glEnd();

    glBegin(GL_POLYGON);  //middle branch
    glVertex2d(-750,235);
    glVertex2d(-735,280);
    glVertex2d(-720,277);
    glVertex2d(-713,270);
    glVertex2d(-728,230);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-735,280);
    glVertex2d(-765,350);
    glVertex2d(-756,356);
    glVertex2d(-720,277);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-765,350);
    glVertex2d(-800,380);
    glVertex2d(-765,360);
    glVertex2d(-755,390);
    glVertex2d(-756,356);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-720,277);
    glVertex2d(-650,350);
    glVertex2d(-645,338);
    glVertex2d(-713,270);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-650,350);
    glVertex2d(-575,380);
    glVertex2d(-645,338);
    glEnd();

    glBegin(GL_POLYGON); //right branch
    glVertex2d(-715,200);
    glVertex2d(-700,235);
    glVertex2d(-690,220);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-700,235);
    glVertex2d(-545,238);
    glVertex2d(-540,225);
    glVertex2d(-690,220);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-545,238);
    glVertex2d(-520,260);
    glVertex2d(-535,237);
    glVertex2d(-470,215);
    glVertex2d(-540,225);
    glEnd();
}


void display(void)
{

    colour();

    glLineWidth(2);
    glBegin(GL_LINES); //Desert outline coordinates
    glColor3f(0.0,0.0,0.0);
    glVertex2d(-960,0);
    glVertex2d(-750,-20);

    glVertex2d(-690,-20);
    glVertex2d(500,-120);

    glVertex2d(750,-140);
    glVertex2d(960,-155);

    glVertex2d(960,-25);
    glVertex2d(900,-28);

    glVertex2d(650,-40);
    glVertex2d(600,-43);

    glVertex2d(500,-45);
    glVertex2d(0,-78);

    glEnd();

    glBegin(GL_LINES); //Tree coordinates
    glColor3f(0.0,0.0,0.0);
    glVertex2d(-750,-100);
    glVertex2d(-750,220);

    glVertex2d(-690,-100);
    glVertex2d(-690,72);

    glVertex2d(-690,99);
    glVertex2d(-690,220);

    //branches
    glVertex2d(-750,220);
    glVertex2d(-850,250);

    glVertex2d(-850,250);
    glVertex2d(-900,240);

    glVertex2d(-900,240);
    glVertex2d(-850,260);

    glVertex2d(-850,260);
    glVertex2d(-900,300);

    glVertex2d(-900,300);
    glVertex2d(-830,260);

    glVertex2d(-830,260);
    glVertex2d(-750,235);

    glVertex2d(-750,235);
    glVertex2d(-735,280);

    glVertex2d(-735,280);
    glVertex2d(-765,350);

    glVertex2d(-765,350);
    glVertex2d(-800,380);

    glVertex2d(-800,380);
    glVertex2d(-765,360);

    glVertex2d(-765,360);
    glVertex2d(-755,390);

    glVertex2d(-755,390);
    glVertex2d(-756,356);

    glVertex2d(-756,356);
    glVertex2d(-720,277);

    glVertex2d(-720,277);
    glVertex2d(-650,350);

    glVertex2d(-650,350);
    glVertex2d(-575,380);

    glVertex2d(-575,380);
    glVertex2d(-645,338);

    glVertex2d(-645,338);
    glVertex2d(-713,270);

    glVertex2d(-713,270);
    glVertex2d(-728,230);

    glVertex2d(-728,230);
    glVertex2d(-715,200);

    glVertex2d(-715,200);
    glVertex2d(-700,235);

    glVertex2d(-700,235);
    glVertex2d(-545,238);

    glVertex2d(-545,238);
    glVertex2d(-520,260);

    glVertex2d(-520,260);
    glVertex2d(-535,237);

    glVertex2d(-535,237);
    glVertex2d(-470,215);

    glVertex2d(-690,220);
    glVertex2d(-540,225);

    glVertex2d(-540,225);
    glVertex2d(-470,215);

    glVertex2d(-750,100);
    glVertex2d(-850,150);

    glVertex2d(-850,150);
    glVertex2d(-750,80);

    glVertex2d(-710,85);
    glVertex2d(-655,120);

    glVertex2d(-710,60);
    glVertex2d(-635,105);

    glVertex2d(-635,105);
    glVertex2d(-655,120);
    glEnd();

    glBegin(GL_POLYGON); //tree hollow
    glColor3f(0.0,0.0,0.0);
    for(int i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-690-15*sin(theta),43-25*cos(theta));
    }
    glEnd();

    glBegin(GL_LINES); //cactus
    glColor3f(0.0,0.0,0.0);
    glVertex2d(650,-280);
    glVertex2d(650,100);

    glVertex2d(750,-280);
    glVertex2d(750,100);

    glVertex2d(650,100);
    glVertex2d(750,100);

    glVertex2d(750,-80);
    glVertex2d(900,-80);

    glVertex2d(900,-80);
    glVertex2d(900,50);

    glVertex2d(900,50);
    glVertex2d(800,50);

    glVertex2d(800,50);
    glVertex2d(800,0);

    glVertex2d(750,0);
    glVertex2d(800,0);

    glVertex2d(650,-200);
    glVertex2d(500,-200);

    glVertex2d(500,-200);
    glVertex2d(500,-15);

    glVertex2d(500,-15);
    glVertex2d(600,-15);

    glVertex2d(600,-15);
    glVertex2d(600,-120);

    glVertex2d(600,-120);
    glVertex2d(650,-120);
    glEnd();

    glPointSize(4.5);  // cactus spike
    glBegin(GL_POINTS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(725.0,70.0);
    glVertex2f(700.0,-90.0);
    glVertex2f(680.0,10.0);
    glVertex2f(720.0,-30.0);
    glVertex2f(675.0,-160.0);
    glVertex2f(710.0,-210.0);
    glVertex2f(790.0,-60.0);
    glVertex2f(860.0,-50.0);
    glVertex2f(825.0,-10.0);
    glVertex2f(875.0,20.0);
    glVertex2f(520.0,-55.0);
    glVertex2f(575.0,-95.0);
    glVertex2f(535.0,-155.0);
    glVertex2f(585.0,-185.0);
    glVertex2f(635.0,-135.0);
    glEnd();

    smallcactus();
    birds();
    stone();
    //pot();
    //fullwaterpot();
    //crowleft();
    //reversecrow();
    //glFlush();
}

void movement1()  // movement for crow to come towards pot
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    display();
    glPopMatrix();
    glPushMatrix();
    pot();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-570.0+x,300.0-y,0.0);
    crow();
    glPopMatrix();
    x+=114;
    y+=99;
    glutSwapBuffers();
}

void movement2()  // movement of crow toward left side stone
{

    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    display();
    glPopMatrix();
    glPushMatrix();
    pot();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-170.0-g,-199.0+h,0.0);
    reversecrow();
    g+=100;
    h+=0;
    glPopMatrix();
    glutSwapBuffers();
}

void movement3()  // movement of crow bring stone toward pot
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    display();
    glPopMatrix();
    glPushMatrix();
    pot();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-670.0+j,-199.0+k,0.0);
    crowstone();
    glPopMatrix();
    j+=135;
    k+=0;
    glutSwapBuffers();
}

void movement4()  // movement of crow toward right side stone
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    display();
    glPopMatrix();
    glPushMatrix();
    pot();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.0+r,-199.0+s,0.0);
    crowright();
    glPopMatrix();
    r+=135;
    s+=0;
    glutSwapBuffers();
}

void movement5() // movement of crow toward pot with stone
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    display();
    glPopMatrix();
    glPushMatrix();
    pot();
    glPopMatrix();
    glPushMatrix();
    glTranslated(540.0-u,-199.0+v,0.0);
    crowleft();
    u+=135;
    v+=0;
    glPopMatrix();
    glutSwapBuffers();
}

void movement6()  // movement of crow going back to tree
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    display();
    glPopMatrix();
    glPushMatrix();
    pot();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-40.0+o,-199.0+p,0.0);
    reversecrow();
    glPopMatrix();
    o-=114;
    p+=99;
    glutSwapBuffers();
}

void checkpot1()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    display();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-10.0,-270.0,0.0);
    lesswaterpot();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-40.0,-199.0,0.0);
    crow();
    glPopMatrix();
    glutSwapBuffers();
}

void checkpot2()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    display();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-10.0,-270.0,0.0);
    fullwaterpot();
    glPopMatrix();
    glPushMatrix();
    glTranslated(10.0,-199.0,0.0);
    reversecrow();
    glPopMatrix();
    glutSwapBuffers();
}

void lastpage()
{
    glClearColor(1.0,0.5,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0,0.0,0.0);
    glRasterPos3f(-200.0,350.0,0);
    char message1[] = "MORAL OF THE STORY:";
    for(int k=0;k<strlen(message1);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message1[k]);
    }

    glColor3f(1.0,0.0,0.0);
    glRasterPos3f(-350.0,250.0,0);
    char message2[] = "WHERE THERE IS A WILL THERE IS A WAY";
    for(int k=0;k<strlen(message2);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message2[k]);
    }

    glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-600.0,200.0,0);
    char message3[] = "IF YOU ARE DETERMINED ENOUGH, YOU CAN FIND A WAY TO ACHIEVE WHAT YOU WANT";
    for(int k=0;k<strlen(message3);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message3[k]);
    }

    glRasterPos3f(-250.0,150.0,0);
    char message4[] = "EVEN IF IT IS VERY DIFFICULT.";
    for(int k=0;k<strlen(message4);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message4[k]);
    }

    glColor3f(0.0,0.0,0.0);
    glRasterPos3f(-150.0,-100.0,0);
    char message5[] = "THANK YOU!";
    for(int k=0;k<strlen(message5);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message5[k]);
    }

    glColor3f(rand()%3,rand()%3,rand()%3);
    glRasterPos3f(-300.0,-300.0,0);
    char message6[] = "PRESS 'ESC' FOR STOP THE PROJECT";
    for(int k=0;k<strlen(message6);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message6[k]);
    }
    glutSwapBuffers();
}

void keyAction(unsigned char key,int x,int y)
{
    switch(key)
    {
        case 32:   // for starting project
            glutDisplayFunc(storypage);
            break;

        case '1':  // for downward movement
            for(m=0; m<=5; m++)
            {
                movement1();
                delay(1.2);
            }
            break;

        case '2':  // for checking first time water in pot
            for(m=0; m<=5; m++)
            {
                checkpot1();
            }
            break;

        case '3':  // for left movement
            for(m=0; m<=5; m++)
            {
                movement2();
                delay(1.2);
            }
            break;

        case '4':  // for right movement
            for(m=0; m<=5; m++)
            {
                movement3();
                delay(1.2);
            }
            break;

        case '5':  // for again right movement
            for(m=0; m<=4; m++)
            {
                movement4();
                delay(1.2);
            }
            break;

        case '6':  // for again right movement
            for(m=0; m<=4; m++)
            {
                movement5();
                delay(1.2);
            }
            break;

        case '7':  // for checking water in pot last time
            for(m=0; m<=5; m++)
            {
                checkpot2();
            }
            break;

        case '8':  // for upward movement
            for(m=0; m<=5; m++)
            {
                movement6();
                delay(1.0);
            }
            break;

        case '9':  // last page of project
            lastpage();
            break;

        case 27:   //for stopping project
            exit(0);
            break;

        default:
            break;
    }
}

void init(void)
{
    glClearColor(1.0,1.0,1.0,1.0);
}

void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-960,960,-540,540);
    glMatrixMode(GL_MODELVIEW);

}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1920,1080);
    glutCreateWindow("Thirsty_Crow");
    glutDisplayFunc(welcomeDisplay);
    glutReshapeFunc(reshape);
    init();
    glutKeyboardFunc(keyAction);
    glutMainLoop();
}
