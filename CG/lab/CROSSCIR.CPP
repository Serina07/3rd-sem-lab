#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:/TC/BGI");
  for(int i=0;i<300;i++)
  {
  delay(5);
  cleardevice();
  circle(100,100+i,25);
  setfillstyle(SOLID_FILL,RED);
  floodfill(101,101+i,15);
  circle(100,100+i,50);
  line(65,65+i,82,84+i);
  line(119,119+i,136,136+i);
  line(80,115+i,60,130+i);
  line(135,65+i,116,82+i);
  }
   for( i=0;i<250;i++)
  {
  delay(10);
  cleardevice();
  circle(100,400-i,25);
  setfillstyle(SOLID_FILL,RED);
  floodfill(101,401-i,15);
  circle(100,400-i,50);
  line(65,365-i,82,384-i);
  line(119,419-i,136,436-i);
  line(80,415-i,60,430-i);
  line(135,365-i,116,382-i);
  }
   for( i=0;i<250;i++)
  {
  delay(5);
  cleardevice();
  circle(100,150+i,25);
  setfillstyle(SOLID_FILL,RED);
  floodfill(101,151+i,15);
  circle(100,150+i,50);
  line(65,115+i,82,134+i);
  line(119,169+i,136,186+i);
  line(80,165+i,60,180+i);
  line(135,115+i,116,132+i);
  }
   for( i=0;i<200;i++)
  {
  delay(10);
  cleardevice();
  circle(100,400-i,25);
  setfillstyle(SOLID_FILL,RED);
  floodfill(101,401-i,15);
  circle(100,400-i,50);
  line(65,365-i,82,384-i);
  line(119,419-i,136,436-i);
  line(80,415-i,60,430-i);
  line(135,365-i,116,382-i);
  }
   for( i=0;i<200;i++)
  {
  delay(5);
  cleardevice();
  circle(100,200+i,25);
  setfillstyle(SOLID_FILL,RED);
  floodfill(101,201+i,15);
  circle(100,200+i,50);
  line(65,165+i,82,184+i);
  line(119,219+i,136,236+i);
  line(80,215+i,60,230+i);
  line(135,165+i,116,182+i);
  }
   for( i=0;i<150;i++)
  {
  delay(10);
  cleardevice();
  circle(100,400-i,25);
  setfillstyle(SOLID_FILL,RED);
  floodfill(101,401-i,15);
  circle(100,400-i,50);
  line(65,365-i,82,384-i);
  line(119,419-i,136,436-i);
  line(80,415-i,60,430-i);
  line(135,365-i,116,382-i);
  }
   for( i=0;i<150;i++)
  {
  delay(5);
  cleardevice();
  circle(100,250+i,25);
  setfillstyle(SOLID_FILL,RED);
  floodfill(101,251+i,15);
  circle(100,250+i,50);
  line(65,215+i,82,234+i);
  line(119,269+i,136,286+i);
  line(80,265+i,60,280+i);
  line(135,215+i,116,232+i);
  }
  getch();
  closegraph();
}
