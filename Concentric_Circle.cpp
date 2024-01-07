#include<iostream>
#include<graphics.h>  
using namespace std;
int main()
{
	int gd=DETECT,gm,x_cen,y_cen;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	x_cen=getmaxx()/2;
	y_cen=getmaxy()/2;
	outtextxy(x_cen+110,y_cen,"Concentric Circle");
	circle(x_cen,y_cen,100);
	circle(x_cen,y_cen,80);
	circle(x_cen,y_cen,60);
	circle(x_cen,y_cen,40);
	circle(x_cen,y_cen,20);
	getch();
	closegraph();
}
