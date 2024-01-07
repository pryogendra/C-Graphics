#include<iostream>
#include<graphics.h>  

int main()
{
	int gd=DETECT,gm,x_cen,y_cen;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	x_cen=getmaxx()/2;
	y_cen=getmaxy()/2;
	outtextxy(x_cen,getmaxy()-20,"(X_cen,Y_max)");
	outtextxy(x_cen,0,"(X_cen,0)");
	outtextxy(0,y_cen,"(0,Y_cen)");
	outtextxy(getmaxx()-100,y_cen,"(X_max,Y_cen)");
	line(x_cen,0,x_cen,getmaxy());
	line(0,y_cen,getmaxx(),y_cen);
	getch();
	closegraph();
}

