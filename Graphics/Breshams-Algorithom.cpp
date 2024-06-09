#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
	double d,dx,dy,x1,y1,x2,y2;
	cout << "Enter the value of P1 : ";
	cin >> x1 >> y1;
	cout << "Enter the value of P2 : ";
	cin >> x2 >> y2;
	
	int wx,wy;
	cout << "Enter window size : ";
	cin >> wx >> wy;
	
	if(x1>x2)
	{
		int tmp = x1;
		x1 = x2;
		x2 = tmp;
	}
	if(y1>y2)
	{
		int tmp =y1;
		y1 = y2;
		y2 = tmp;
	}
	int cx = wx/2;
	int cy = wy/2;	
	initwindow(wx,wy,"Drawing Line.");
	line(cx,0,cx,wy);
	line(0,cy,wx,cy);
	
	char str[40],str1[40];
	strcpy(str,"(");
	strcat(str, itoa(x1, str1, 10));
	strcat(str,",");
	strcat(str, itoa(y1, str1, 10));
	strcat(str,")");
	outtextxy(cx+x1, cy-y1, str);
	
	char str2[40],str3[40];
	strcpy(str2,"(");
	strcat(str2, itoa(x2, str3, 10));
	strcat(str2,",");
	strcat(str2, itoa(y2, str3, 10));
	strcat(str2,")");
	outtextxy(cx+x2, cy-y2, str2);
	
	putpixel(x1,y1,WHITE);
	dx = x2-x1;
	dy = y2-y1;
	int ds = 2*dy;
	int dt = 2*(dy - dx);
	d = 2*dy - dx;
	
	double m= dy/dx;
	int x,y;
	
	while(x1<=x2)
	{
		
		if(m<=1)
		{
			if(d<0)
			{
				d = d + ds;
				putpixel(cx+x1,cy-y1,WHITE);
				delay(100);
				x1++;
			}
			else
			{
				d = d+dt;
				putpixel(cx+x1,cy-y1,WHITE);
				delay(100);
				y1++;
			}
		}
		else
		{
			d = 2*dx - dy;
			while(x1<=x2)
			{
				if(d<=0)
				{
					d=d+2*dx;
					putpixel(cx+x1,cy-y1,WHITE);
					delay(100);
					y1++;
				}
				else
				{
					d = d+2*(dx-dy);
					putpixel(cx+x1,cy-y1,WHITE);
					delay(100);
					x1++;
				}
			}
		}
		//putpixel(cx+x1,cy-y1,WHITE);
	}
	
	while(!kbhit())
	{
		delay(200);
	}
	
	return 0;
		
}
