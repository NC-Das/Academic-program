#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
	double x, y, x1, y1, x2, y2,dx, dy,d, m, wx, wy, cx, cy;
	cout<<"Enter the window size: ";
	cin>>wx>>wy;
	initwindow(wx, wy, "DDA Line Drawing");
	cx= wx/2;
	cy=wy/2;
	rectangle(0,0,wx, wy);
	line(cx, 0, cx, wy);
	line(0, cy, wx, cy);
	
	cout<<"Enter the starting point: ";
	cin>>x1>>y1;
	cout<<"Enter the ending point: ";
	cin>>x2>>y2;
	
	if(x2<x1)
	{
		int temp;
		temp=x2;
		x2=x1;
		x1=temp;
		
		temp=y2;
		y2=y1; 
		y1=temp;
	}
	
	dx=x2-x1;
	dy=y2-y1;
	m= dy/dx;
	
	double inc1, inc2;
	d= 2*dy-dx;
	inc1= 2*dy;
	inc2= 2*(dy-dx);
	
	if(m<1)
	{
		while(x1<=x2)
		{
			if(d<0)
			{
				d+=inc1;
			}
			else
			{
				d+=inc2;
				y1++;
			}
			x1++;
			putpixel(cx+x1, cy-y1, 15);
			delay(100);
		}
	}
	else
	{
		while(y1<=y2)
		{
			if(d<0)
			{
				d+=inc1;
			}
			else
			{
				d+=inc2;
				x1++;
			}
			y1++;
			putpixel(cx+x1, cy-y1, 15);
			delay(100);
		}
	}
    
	
	while(!kbhit())
	{
		delay(200);
	}
	return 0;
}
