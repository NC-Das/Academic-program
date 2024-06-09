#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{

	double x, y, x1, x2, y1, y2, dx, dy, m, d;
	cout<<"Enter the starting point: ";
	cin>>x1>>y1;
	cout<<"Enter the ending point: ";
	cin>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	m=dy/dx;
	
	cout<<"Enter the window size: ";
	int wx, wy;
	cin>>wx>>wy;
	int cx, cy;
	cx= wx/2;
	cy=wy/2;
	initwindow(wx, wy, "Bresenham's");
	line(wx/2, 0, wx/2, wy);
	line(0, wy/2, wx, wy/2);
	
	if(m<1)
	{
		if(x2<x1)
		{
			x=x2;
			x2=x1;
			y=y2;
		}
		else{
			x=x1;
			y=y1;
		}
		d= 2*dy-dx;
		int inc1, inc2;
		inc1= 2*dy;
		inc2= 2*(dy-dx);
		while(x<=x2)
		{
			if(d<0)
			{
			d+=inc1;
			}
			else
			{
			d+=inc2;
			y++;
			}
			x++;
			putpixel(cx+x, cy-y, WHITE);
			delay(100);
		}
	}
	else
	{
		if(y2<y1)
		{
			y=y2;
			y2=y1;
			x=x2;
		}
		else
		{
			y=y1;
			x=x1;
		}
		d= 2*dx-dy;
		int inc1, inc2;
		inc1= 2*dx;
		inc2 = 2*(dx-dy);
		while(y<=y2)
		{
			if(d<0)
			{
				d+=inc1;
			}
			else
			{
				d+=inc2;
				x++;
			}
			y++;
			putpixel(cx+x, cy-y, WHITE);
			delay(100);
		}
	}
	
	while(!kbhit())
	{
		delay(200);
	}	
	return 0;
}
