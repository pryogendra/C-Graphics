#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	initwindow(500,500,"Badminton");
	while(1)
	{
		for(int i=0;i<300;i+=3)
		{
			setcolor(RED);
			setfillstyle(HATCH_FILL,RED);
			circle(i,i,50);
			line(i,i+50,i,i+150);
			rectangle(i-5,i+150,i+5,i+230);
			floodfill(i,i,RED);
			delay(100);
			cleardevice();
		}
	}
	getch();
	closegraph();
}
