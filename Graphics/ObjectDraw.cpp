#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void Mline(int x1,int y1,int x2,int y2)
{
	double x, y, m;
	if(x2<x1)
	{
		int temp;
		temp=x2;
		x2=x1;
		x1=temp;
	}
	if(y2<y1){
		int temp=y2;
		y2=y1; 
		y1=temp;
	}
	
	m=(y2-y1)/(x2-x1);
	
	if(m<1)
	{
		while(x1<=x2)
		{
			x=round(x1);
			y=round(y1);
			putpixel(x, y, 15);
			delay(30);
			y1= y1 + m;
			x1++;
		}
	}
    else
    {
    	while(y1<=y2)
    	{
    		x=round(x1);
    		y=round(y1);
    		putpixel(x, y, 15);
    		delay(30);
    		x1= x1 + 1/m;
    		y1++;
		}
	}
}

void Mcircle(int h, int k)
{
	putpixel(h, k, WHITE);
	int r=60;
	int x, y;
	x=0;
	y=r;
	int d=3-2*r;
	
	while(x<=y)
	{
		putpixel(h+x, k+y, WHITE);
		putpixel(h+y, k+x, WHITE);
		putpixel(h-y, k+x, WHITE);
		putpixel(h-x, k+y, WHITE);
		putpixel(h+x, k-y, WHITE);
		putpixel(h+y, k-x, WHITE);
		putpixel(h-x, k-y, WHITE);
		putpixel(h-y, k-x, WHITE);
		delay(30);
		if(d<0)
		{
			d+=4*x+6;
		}
		else
		{
			d+=4*(x-y)+10;
			y--;
		}
		x++;
	}	
}

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "Object");
	
	int px1=10, py1=10;
	int px2=400, py2=11;
	int px3=9, py3=250;
	int px4=399, py4=249;
	
	int cx=round((px1+px2)/2);
	int cy=round((py1+py3)/2);
	
	Mline(10,10,400,11);
	Mline(10,10,9,250);
	Mline(9,250,399,249);
	Mline(399,249,400,11);
	
	int x1=round((px1+px2)/2);
	int y1=10;
	int y2=cy-60;
	
	Mline(x1, y1, x1+1, y2);
	int y3=250;
	int y4= cy+60;
	
	Mline(x1, y3, x1+1, y4);
	
	Mcircle(cx, cy);
	
	
	
	
	while(!kbhit())
	{
		delay(200);
	}
	return 0;
}
