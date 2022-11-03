#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void drawline(int x0,int x1,int y0,int y1)
{
  int dx,dy,p,x,y;
  dx = x1-x0;
  dy = y1-y0;
  x = x0;
  y = y0;
  p = 2*dy-dx;
  while(x<x1)
  {
    if(p>=0)
    {
      putpixel(x,y,7);
      y=y+1;
      p=p+2*dy-2*dx;
      delay(100);
    }
    else
    {
      putpixel(x,y,7);
      p=p+2*dy;
    }
    x=x+1;
  }

}
  void main()
  {
    int gd=DETECT,gm;
    float x1,x0,y1,y0,error;
    initgraph(&gd,&gm,"C:/TC/BGI");
    printf("Enter co-ordinates of first point: ");
    scanf("%f%f",&x0,&y0);
    printf("Enter co-ordinates of second point: ");
    scanf("%f%f",&x1,&y1);
    drawline(x0,y0,x1,y1);
    getch();
    closegraph();
  }
