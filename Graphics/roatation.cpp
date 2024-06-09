#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
	double x,y,x_new,y_new,theta;
	cout << "Enter a point : ";
	cin >> x >> y;
	cout << "Enter the angle that have to rotate : ";
	cin >> theta;
	
	x_new = x*cos(theta) - y*sin(theta);
	y_new = x*sin(theta) + y*cos(theta);
	
	initwindow(600,400,"Drawing Line.");
	line(300,0,300,400);
	line(0,200,600,200);
	
	//putpixel(x,y,WHITE);
	if(x_new < 0)
	{
		x_new = -x_new;
	}
	
	if(y_new<0)
	{
		y_new = -y_new;
	}
	//putpixel(round(x_new),round(y_new),WHITE);
	line(300,200,x+300,200-y);
	line(300,200,x_new+300,200-y_new);
	//cout << x_new << y_new;
	
	while(!kbhit())
	{
		delay(200);
	}
	
	
	return 0;
}
