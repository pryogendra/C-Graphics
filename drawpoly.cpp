#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	initwindow(900,500,"DRAW POLY");
	int array[]={100, 100, 100,300, 300,400, 400, 100, 100, 100};
	fillpoly(5,array);
	getch();
	closegraph();
}
