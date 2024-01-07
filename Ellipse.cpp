#include<iostream>
#include<graphics.h>  
using namespace std;
int main()
{
	int gd=DETECT,gm,x_cen,y_cen;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	x_cen=getmaxx()/2;
	y_cen=getmaxy()/2;
	outtextxy(x_cen,y_cen,"Ellipse");
	ellipse(x_cen,y_cen,0,360,70,120);
	getch();
	closegraph();
}
