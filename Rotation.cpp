#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
	cout<<"\n******************* 2D Rotation  ***************************\n";
	int gd=DETECT,gm;
	int x1,x2,y1,y2,x,y,xn,yn;
	float th;
	cout<<"\nEnter the 2 line end points : ";
	cin>>x1>>y1>>x2>>y2;
	cout<<"\nNow enter the Rotation angle : ";
	cin>>th;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	outtextxy(10,10,"                  -: 2D Rotation :-");
	outtextxy(x1,y1,"Before Rotation");
	rectangle(x1,y1,x2,y2);
	float r11=cos((th*3.14)/180);
	float r12=sin((th*3.14)/180);
	float r21=(-sin((th*3.14)/180));
	float r22=cos((th*3.14)/180);
	xn=((x2*r11)-(y2*r12));
	yn=(x2*r12)-(y2*r11);
	outtextxy(x1+10,y1+10,"After Rotation");
	//line(x1,y1,x2-xn,y2-yn);
	rectangle(x1,y1,xn,yn);
	getch();
	closegraph();
}
