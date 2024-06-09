#include<bits/Stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
	double x, y, r, dx, dy, m, d;
	int h, k,x1,y1;
	cout<<"Enter the radius value: ";
	cin>>r;
	cout<<"Enter the center point: ";
	cin>>x1>>y1;
    
    x=0;
    y=r;
	d= 1-r;
	
	int wx, wy;
	cout<<"Enter the window size: ";
	cin>>wx>>wy;
	
	int cx, cy;
	cx=wx/2;
	cy=wy/2;
	initwindow(wx, wy, "Mid point circle drawing");
	line(0, wy/2, wx, wy/2);
	line(wx/2, 0, wx/2, wy);
	
	
	while(x<=y)
	{
		h=cx ;
		k=cy ;
		putpixel(h-x1+x,k+y1+y,WHITE);
		putpixel(h-x1+y,k+y1+x,WHITE);
		putpixel(h-x1-y,k+y1+x,WHITE);
		putpixel(h-x1-x,k+y1+y,WHITE);
		putpixel(h-x1-x,k+y1-y,WHITE);
		putpixel(h-x1-y,k+y1-x,WHITE);
		putpixel(h-x1+y,k+y1-x,WHITE);
		putpixel(h-x1+x,k+y1-y,WHITE);
		if(d<0)
		{
			d = d+2*x+3;
		}
		else
		{
			d = d+2*(x-y)+5;
			y--;
		}
		x++;
	}
	
	while(!kbhit())
	{
		delay(200);
	}
	return 0;
}
