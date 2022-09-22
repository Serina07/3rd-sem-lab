#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:/TC/BGI");
  for(int i=1;i<=150;i++)
  {
  delay(20);
  cleardevice();
  rectangle(50+i,50,100+i,100);
  setfillstyle(SOLID_FILL,RED);
  floodfill(51+i,51,15);

  rectangle(200-i,100,250-i,200);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(201-i,101,15);
  }
  getch();
  closegraph();
}