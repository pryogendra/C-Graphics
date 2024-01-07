#include<iostream>
#include<graphics.h>  
using namespace std;
int main()
{
	int gd=DETECT,gm,x_cen,y_cen;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	x_cen=getmaxx()/2;
	y_cen=getmaxy()/2;
	outtextxy(x_cen,y_cen,"Rectangle");
	rectangle(x_cen-100,y_cen-50,x_cen+100,y_cen+50);
	getch();
	closegraph();
}
