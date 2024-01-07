#include<iostream>
#include<graphics.h>  

int main()
{
	int gd=DETECT,gm,x_cen,y_cen;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	x_cen=getmaxx()/2;
	y_cen=getmaxy()/2;
	line(x_cen,0,x_cen,getmaxy());
	line(0,y_cen,getmaxx(),y_cen);
	circle(x_cen/2,y_cen/2,100);
	rectangle(x_cen+20,20,getmaxx()-20,y_cen-20);
	ellipse(x_cen/2,((getmaxy()-y_cen)/2)+y_cen,0,360,100,50);;
	line(x_cen+60,((getmaxy()-y_cen)/2+y_cen),(getmaxx()-60),((getmaxy()-y_cen)/2+y_cen));
	ellipse(((getmaxx()-x_cen)/2+x_cen),((getmaxy()-y_cen)/2+y_cen),0,180,100,50);
	getch();
	closegraph();
}

