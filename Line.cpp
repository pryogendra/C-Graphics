#include<iostream>
#include<graphics.h>  
using namespace std;
int main()
{
	int gd=DETECT,gm,x_cen,y_cen;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	x_cen=getmaxx()/2;
	y_cen=getmaxy()/2;
	outtextxy(x_cen,y_cen-20,"Line");
	rectangle(x_cen-100,y_cen,x_cen+100,y_cen);
	getch();
	closegraph();
}
