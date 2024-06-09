#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
	double x, y, x1, x2, y1, y2, dx, dy, m;
	cout<<"Starting point is: ";
	cin>>x1>>y1;
	cout<<"Ending point is: ";
	cin>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	m= dy/dx;
	int wx,wy;
	
	cout << "Enter window size : ";
	cin >> wx >> wy;
	
	initwindow(wx,wy,"Drawing line.");
	int cx,cy;
	cx = wx/2;
	cy = wy/2;
	line(0,wy/2,wx,wy/2);
	line(wx/2,0,wx/2,wy);
	if(m<1)
	{
		if(dx<0){
			x=x2;
			x2=x1;
			y=y2;
		}
		else{
			x=x1;
			y=y1;
		}
		while(x<=x2)
		{
			y=round(y+m);
			putpixel(cx+x, cy-y , 15);
			delay(100);
			x++;
		}
	}
	else
	{
		if(dy<0){
			y=y2;
			y2=y1;
			x=x2;
		}
		else{
			x=x1;
			y=y1;
		}
		while(y<=y2)
		{
			x=round(x+1/m);
			putpixel(cx+x, cy-y , 15);
			delay(100);
			y++;
		}
	}
	while(!kbhit())
	{
		delay(200);
	}
	return 0;
}
