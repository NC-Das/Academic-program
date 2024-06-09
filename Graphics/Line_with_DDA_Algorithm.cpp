#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
	double x,y,x1,y1,x2,y2,m,dx,dy;
	cout << "Enter the value of P1 : ";
	cin >> x1 >> y1;
	cout << "Enter the value of P2 : ";
	cin >> x2 >> y2;
	
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
	
	int wx,wy;
	cout << "Enter window size : ";
	cin >> wx >> wy;
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
	
	if(m<=1)
	{
		while(x1<=x2)
		{
			y1 = y1+m;
			y = round(y1);
			putpixel(cx+x1,cy-y,WHITE);
			delay(100);
			x1++;
		}
	
	}
	else
	{
		while(y1<=y2)
		{
			x1 = x1+1/m;
			x = round(x1);
			putpixel(cx+x,cy-y1,WHITE);
			delay(100);
			y1++;
		}
	}
	
	while(!kbhit())
	{
		delay(200);
	}
	
	return 0;
}
