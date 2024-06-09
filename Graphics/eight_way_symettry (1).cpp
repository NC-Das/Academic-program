#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
	int x,y,r,d;
	cout << "Enter the redius of the circle: ";
	cin >> r;
	x = 0;
	y = r;
	d = 3 - 2*r;
	
	initwindow(600,400,"Drawing Line.");
	line(300,0,300,400);
	line(0,200,600,200);
	
	while(x<=y)
	{
		int h = 600;
		int k = 400;
		
		//Top Right
		/*putpixel(3*h/4+x,k/4+y,WHITE);
		putpixel(3*h/4+y,k/4+x,WHITE);
		putpixel(3*h/4-y,k/4+x,WHITE);
		putpixel(3*h/4-x,k/4+y,WHITE);
		putpixel(3*h/4-x,k/4-y,WHITE);
		putpixel(3*h/4-y,k/4-x,WHITE);
		putpixel(3*h/4+y,k/4-x,WHITE);
		putpixel(3*h/4+x,k/4-y,WHITE);*/
		
		//Bottom Left
		/*putpixel(h/4+x,3*k/4+y,WHITE);
		putpixel(h/4+y,3*k/4+x,WHITE);
		putpixel(h/4-y,3*k/4+x,WHITE);
		putpixel(h/4-x,3*k/4+y,WHITE);
		putpixel(h/4-x,3*k/4-y,WHITE);
		putpixel(h/4-y,3*k/4-x,WHITE);
		putpixel(h/4+y,3*k/4-x,WHITE);
		putpixel(h/4+x,3*k/4-y,WHITE);*/
		
		//Bottom Right
		putpixel(3*h/4+x,3*k/4+y,WHITE);
		putpixel(3*h/4+y,3*k/4+x,WHITE);
		putpixel(3*h/4-y,3*k/4+x,WHITE);
		putpixel(3*h/4-x,3*k/4+y,WHITE);
		putpixel(3*h/4-x,3*k/4-y,WHITE);
		putpixel(3*h/4-y,3*k/4-x,WHITE);
		putpixel(3*h/4+y,3*k/4-x,WHITE);
		putpixel(3*h/4+x,3*k/4-y,WHITE);
		
		
		if(d<0)
		{
			d = d+4*x+6;
		}
		else
		{
			d = d+4*(x-y)+10;
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
