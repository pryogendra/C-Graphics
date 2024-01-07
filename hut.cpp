#include <conio.h> 
#include <graphics.h> 
#include <stdio.h> 
int main() 
{ 
	int gd = DETECT, gm; 
	initgraph(&gd,&gm, "");
	outtextxy(20,20,"****************** HUT ********************");
	line(100, 100, 150, 50); 
	line(150, 50, 200, 100); 
	rectangle(100, 100, 200, 200); 
	rectangle(130, 130, 170, 200);  
	getch();  
	closegraph(); 
} 

