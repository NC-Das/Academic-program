#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
	double x,y,x1,y1,x2,y2,m,dx,dy;
	cout << "Starting point : ";
	cin >> x1 >> y1;
	cout << "Ending point : ";
	cin >> x2 >> y2;
	int wx,wy;
	cout << "Enter window size : ";
	cin >> wx >> wy;
	
	dx = x2 - x1;
	dy = y2 - y1;
	m = dy/dx;
	if(x2<x1)
		{
			double tem;
			tem = x1;
			x1 = x2;
			x2 = tem;
		}
	if(y2<y1)
	{
		double tem;
		tem = y1;
		y1 = y2;
		y2 = tem;
	}
	int cx = wx/2;
	int cy = wy/2;	
	initwindow(wx,wy,"Drawing Line.");
	line(cx,0,cx,wy);
	line(0,cy,wx,cy);

	if(m<=1)
	{
		while(x1<=x2)
		{
			y1 = y1+m;
			y = round(y1);
			putpixel(cx+x1,cy-y,WHITE);
			delay(100);
			//cout << "X,Y : " << x1 << "," << y << endl;
			x1++;
		}
	
	}
	else
	{
		while(y1<=y2)
		{
			x1 = x1+1/m;
			x = round(x1);
			putpixel(cx+x,cy-y1,WHITE); // drawing line i first quadrant
			delay(100);
			//cout << "X,Y : " << x << "," << y1 << endl;
			y1++;
		}
	}
	
	while(!kbhit())
	{
		delay(200);
	}
	
	return 0;
}
