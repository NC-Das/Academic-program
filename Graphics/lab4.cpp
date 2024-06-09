
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void MLine(int x1, int y1, int x2, int y2)
{
	delay(50);
	if(x1>x2)
	{
		int tmp = x1;
		x1 = x2;
		x2 = tmp;
	}
	if(y1>y2)
	{
		int tmp = y1; 
		y1 = y2;
		y2 = tmp;
	}
	int dx = x2 - x1;
	int dy = y2 - y1;
float m = dy/dx;
	if(m<1)
	{
		while(x1<x2)
		{
			int x = round(x1);
			int y = round(y1);
			putpixel(x,y,WHITE);
			delay(30);
			x1++;
			y1 = y1+m;
		}	
	}
	else
	{
		while(y1<y2)
		{
			int x = round(x1);
			int y = round(y1);
			putpixel(x,y,WHITE);
			delay(30);
			y1++;
			x1 = x1+1/m;
		}
	}
}

void MCircle(int h, int k)
{
	putpixel(h,k,WHITE);
	int r=60;
	int x = 0,y=r;
	int d = 3-2*r; 
	while(x<=y)
	{
		putpixel(h+x,k+y,WHITE);
		putpixel(h+y,k+x,WHITE);
		putpixel(h-y,k+x,WHITE);
		putpixel(h-x,k+y,WHITE); 
		putpixel(h-x,k-y,WHITE);
		putpixel(h-y,k-x,WHITE);
		putpixel(h+y,k-x,WHITE);
		putpixel(h+x,k-y,WHITE); 
		delay(30);
		if(d<0)
		{
			d = d + 4*x + 6;	
		}
		else
		{
			d = d + 4*(x-y) + 10;
			y--;
		}
		x++;
	}
}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"Output Object"); 
	
	int px1=10,py1=10;
	int px2=9,py2=250;
	int px3=399,py3=249;
	int px4=400,py4=11;
	
	int cx = round((px1+px4)/2);
	int cy = round((py1+py2)/2); 
	
	MLine(10,10,400,11);
	MLine(10,10,9,250);
	MLine(9,250,399,249);
	MLine(399,249,400,11);
	int x1 = (px1+px4)/2;
	int y1 = 10;
	int y2 = cy - 60;
    MLine(x1,y1,x1+1,y2);
	int y3 = 250; 
	int y4 = cy + 60;
	MLine(x1,y3,x1+1,y4);
	
	MCircle(cx,cy);
	
	while(!kbhit())
	{
		delay(200);
	}
	return 0;}

