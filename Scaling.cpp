#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
	cout<<"\n******************* 2D Scaling  ***************************\n";
	int gd=DETECT,gm;
	int x1,x2,y1,y2,sx,sy;
	cout<<"\nEnter the 2 line end points : ";
	cin>>x1>>y1>>x2>>y2;
	cout<<"\nNow enter the Scaling number : ";
	cin>>sx>>sy;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	outtextxy(10,10,"********************** 2D Scaling  ***************************");
	outtextxy(x1,y1,"Line before Scaling");
	line(x1,y1,x2,y2);
	x1*=sx;
	y1*=sy;
	x2*=sx;
	y2*=sy;
	outtextxy(x1,y1,"Line after Scaling");
	line(x1,y1,x2,y2);
	getch();
	closegraph();
}
