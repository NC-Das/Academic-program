#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
	int x,y,r,d , cx,cy;
	
	cout << "Enter the redius : ";
	cin >> r;
	cout << "Enter center : ";
	cin >> cx >> cy;
	x = 0;
	y = r;
	d = 1 - r;
	int wx = 600, wy = 400;
	int h = wx/2;
	int k = wy/2;
	
	initwindow(wx,wy,"Circle Drawing using Midpoint method.");
	
	rectangle(0,0,getmaxx(),getmaxy());
	line(wx/2,0,wx/2,wy);
	line(0,wy/2,wx,wy/2);
	
	while(x<=y)
	{
		putpixel(h-cx+x,k+cy+y,RED);
		putpixel(h-cx+y,k+cy+x,RED);
		putpixel(h-cx-y,k+cy+x,RED);
		putpixel(h-cx-x,k+cy+y,RED);
		putpixel(h-cx-x,k+cy-y,RED);
		putpixel(h-cx-y,k+cy-x,RED);
		putpixel(h-cx+y,k+cy-x,RED);
		putpixel(h-cx+x,k+cy-y,RED);
		
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
	
	char str[40],str1[40];
	strcpy(str,"(");
	strcat(str, itoa(cx, str1, 10));
	strcat(str,",");
	strcat(str, itoa(cy, str1, 10));
	strcat(str,")");
	outtextxy(h-cx-15, k+cy+5, str);
	
	while(!kbhit())
	{
		delay(200);
	}
		
	return 0;	
}
