#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
  int gd= DETECT,gm;
  initgraph(&gd,&gm,"C://TC//BGI");

  setfillstyle(SOLID_FILL, RED);
  for(int i=0; i<300; i++)
  {
  cleardevice();
  rectangle(100+i,100,200+i,200);
  floodfill(101+i,101,15);
  delay(5);
  }

  setfillstyle(SOLID_FILL, GREEN);
  for(i=0; i<200; i++)
  {
  cleardevice();
  rectangle(400,100+i,500,200+i);
  floodfill(401,101+i,15);
  delay(5);
  }

  setfillstyle(SOLID_FILL, YELLOW);
  for(i=0; i<300; i++)
  {
  cleardevice();
  rectangle(400-i,300,500-i,400);
  floodfill(401-i,301,15);
  delay(5);
  }

  setfillstyle(SOLID_FILL, BLUE);
  for(i=0; i<200; i++)
  {
  cleardevice();
  rectangle(100,300-i,200,400-i);
  floodfill(101,301-i,15);
  delay(5);
  }

  getch();
  closegraph();
}