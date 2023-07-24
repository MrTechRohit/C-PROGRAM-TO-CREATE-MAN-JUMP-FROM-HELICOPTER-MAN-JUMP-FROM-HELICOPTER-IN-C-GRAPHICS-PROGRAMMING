/*----------- WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL  --------------*/
//___________ C++ PROGRAM TO CREATE MAN JUMP FROM HELICOPTER _______________*/


#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"c:\\tc\\bgi");

//DRAWING HELICOPTER
for(i=1;i<=500;i++)
{
//Area
setcolor(15);
line(0,350,600,350);
rectangle(0,350,100,150);
rectangle(40,350,60,300);
rectangle(10,170,30,200);
rectangle(70,170,90,200);
rectangle(10,230,30,260);
rectangle(70,230,90,260);

rectangle(100,350,180,250);
line(100,250,140,180);
line(180,250,140,180);
rectangle(110,280,130,300);
rectangle(150,280,170,300);
rectangle(130,350,160,330);

rectangle(180,350,350,300);
rectangle(190,310,220,330);
rectangle(340,310,310,330);

rectangle(370,350,440,150);
rectangle(385,350,405,300);
rectangle(380,170,400,200);
rectangle(410,170,430,200);
rectangle(380,230,400,260);
rectangle(410,230,430,260);

settextstyle(0,0,1);
outtextxy(190,340,":- ROHIT TECH STUDY");

//head of heli
setcolor(11);
ellipse(300+i,100,-90,-270,20,25);

//up down line
setcolor(11);
line(300+i,75,260+i,75);
line(300+i,125,260+i,125);

//back head of heli
setcolor(14);
ellipse(260+i,100,90,130,20,25);
ellipse(260+i,100,230,270,20,25);

//back line
setcolor(14);
line(150+i,100,247+i,120);
line(150+i,100,247+i,80);

//BACK fan
setcolor(7);
circle(150+i,100,25);
setfillstyle(1,7);
floodfill(150+i,100,7);
setcolor(BLUE);

pieslice(150+i,100,0+i,2+i,25);
pieslice(150+i,100,90+i,92+i,25);
pieslice(150+i,100,180+i,182+i,25);
pieslice(150+i,100,270+i,272+i,25);

//down stand
setcolor(10);
line(275+i,125,270+i,150);
line(285+i,125,290+i,150);
line(260+i,150,300+i,150);

//up line(fan)
setcolor(14);
line(280+i,50,280+i,75);
line(260+i,50,300+i,50);

//middle set
setcolor(11);
line(290+i,85,290+i,110);
line(290+i,110,310+i,110);

// MAN DRAWING
setcolor(15);
//head
circle(300,200+i,15);

//body
line(300,215+i,300,250+i);

//hand
line(300,230+i,275,190+i);
line(300,230+i,325,190+i);

//leg
line(300,250+i,285,270+i);
line(300,250+i,315,270+i);

//parashoot handel
setcolor(14);
line(275,190+i,275,150+i);
line(325,190+i,325,150+i);

//parashoot clorth
setcolor(10);
ellipse(300,150+i,0,200,25,50);
ellipse(300,150+i,0,180,25,25);
ellipse(300,150+i,0,180,25,20);
delay(15);
cleardevice();
}

getch();
closegraph();
}



/*<<<<<<<<<<<<<<< I HOPE YOU LIKE THIS PROGRAMMING >>>>>>>>>>>>>>>>>>>>>>>>


_______________ LIKE ________ SHARE ___________ SUBSCRIBE ________________*/

