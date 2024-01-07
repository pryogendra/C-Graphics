#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	int x,y,x_mid,y_mid,radius,dp;
	cout<<"\n*************** MID POINT Circle Drawing Algorithm ***************************\n\n";
	cout<<"\nEnter the coordinates : ";
	cin>>x_mid>>y_mid;
	cout<<"\nNow enter the radius : ";
	cin>>radius;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	outtextxy(10,10,"*************** MID POINT Circle Drawing Algorithm ***************************");
	x=0;
	y=radius;
	dp=1-radius;
	do
	{
		putpixel(x_mid+x,y_mid+y,YELLOW);
		putpixel(x_mid+y,y_mid+x,YELLOW);
		putpixel(x_mid-y,y_mid+x,YELLOW);
		putpixel(x_mid-x,y_mid+y,YELLOW);
		putpixel(x_mid-x,y_mid-y,YELLOW);
		putpixel(x_mid-y,y_mid-x,YELLOW);
		putpixel(x_mid+y,y_mid-x,YELLOW);
		putpixel(x_mid+x,y_mid-y,YELLOW);
		if(dp<0)
		{
			dp+=(2*x)+1;
		}
		else
		{
			y=y-1;
			dp+=(2*x)-(2*y)+1;
		}
		x=x+1;
	}
	while(y>x);
	getch();
	
}
