#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>


void main()
{
 int gd=DETECT,gm,i;
 initgraph(&gd,&gm,"c:/turboc3/bgi");
 for(i=0;i<300;i++)
 {
  delay(5);
  cleardevice();
  rectangle(300-i,50,350-i,100);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(301-i,51,15);

  delay(5);
  cleardevice();
  rectangle(50+i,150,100+i,200);
  setfillstyle(SOLID_FILL,RED);
  floodfill(51+i,151,15);
 }
 for(i=0;i<200;i++)
 {
  delay(5);
  cleardevice();
  rectangle(0,50+i,50,100+i);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(1,51+i,15);

  delay(5);
  cleardevice();
  rectangle(350,150+i,400,200+i);
  setfillstyle(SOLID_FILL,RED);
  floodfill(351,151+i,15);
 }
 for(i=0;i<300;i++)
 {
  delay(5);
  cleardevice();
  rectangle(0+i,250,50+i,300);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(1+i,251,15);

  delay(5);
  cleardevice();
  rectangle(350-i,350,400-i,400);
  setfillstyle(SOLID_FILL,RED);
  floodfill(351-i,351,15);
 }
 for(i=0;i<200;i++)
 {
  delay(5);
  cleardevice();
  rectangle(300,250-i,350,300-i);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(301,251-i,15);

  delay(5);
  cleardevice();
  rectangle(50,350-i,100,400-i);
  setfillstyle(SOLID_FILL,RED);
  floodfill(51,351-i,15);
 }
 getch();
 closegraph();
}
