#include<graphics.h>
#include<math.h>
#include<bits/stdc++.h>
#include<dos.h>
using namespace std;
int main()
{
	initwindow(400, 300, "Direct Equation");
	
	float x,y,x1,y1,x2,y2,dx,dy,step,m,b, xend, yend;
	int i;
	cout<<"Enter the value of x1: ";
	cin>>x1;
	cout<<"Enter the value of Y1; ";
	cin>>y1;
	cout<<"Enter the value of x2: ";
	cin>>x2;
	cout<<"Enter the value of y2: ";
	cin>>y2;
	dx=(x2-x1);
	dy=(y2-y1);
	m=dy/dx;
	b= (y1- m*x1);

	if(m<1)
	{
		if(dx>0)
		{
			x=x1;
			xend=x2;
		}
		else
		{
			x=x2;
			xend=x1;
		}
		while(x<=xend)
		{
			y= m*x+b;
			x++;
			putpixel(x, y , 15);
		}
	}
	else
	{
		if(dy>0)
		{
			y=y1;
			yend=y2;
		}
		else
		{
			y=y2;
			yend=y1;
		}
		while(y<=yend)
		{
			x=(y-b)/m;
			y++;
			putpixel(x, y , 15);
		}
	}
		
	while(!kbhit())
	{
		delay(200);
	}
	return 0;
}
