#include<graphics.h>
#include<iostream>
using namespace std;
int main ()
{
	int x1, y1, x2, y2;
	int x, y, dx, dy;
	int gd=DETECT, gm;
	cout<<"Enter the point of the Bresenhams Algorithm : ";
	cin>>x1>>y1>>x2>>y2;
	initgraph(&gd, &gm, "C://TC//bgi");
	outtextxy(20,20,"                          -: Bresenham's Line Drawing Algorithm :-");
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	x=x1;
	y=y1;
	int i=0;
	while(i<=dx)
	{
		putpixel(x, y, 13);
	
		int Pk;
		Pk=2*dy-dx;
		if(Pk<0)
		{
			x=x+1;
			y=y;
			Pk=Pk+2*dy;
		}
		else
		{
			x=x+1;
			y=y+1;
			Pk=Pk+2*dy-2*dx;
		}
		i++;
		putpixel(x, y, 015);
	}
	getch();
	closegraph();
}
