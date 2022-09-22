#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

void down(int x,int y)
{
   int i;
   setfillstyle(SOLID_FILL,RED);
   for(i=y;i<400;i++)
   {
      cleardevice();
      //floodfill(x+1,i+1,255);
      circle(x,i,50);
      circle(x,i,20);
      floodfill(x-5,i-5,255);
      line(x-35,i-35,x+35,i+35);
      line(x+35,i-35,x-35,i+35);
      delay(5);
   }
}

void up(int x,int y)
{
   int i;
   setfillstyle(SOLID_FILL,RED);
   for(i=400;i>y;i--)
   {
      cleardevice();
      circle(x,i,50);
      circle(x,i,20);
      floodfill(x+1,i+1,255);
      line(x-35,i-35,x+35,i+35);
      line(x+35,i-35,x-35,i+35);
      delay(5);
   }
}


void main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:/TC/BGI");
   delay(1000);

   down(50,50);
   up(50,150);
   down(50,150);
   up(50,250);
   down(50,250);
   up(50,350);
   down(50,350);
   getch();
   closegraph();
}