#include <iostream>
#include<graphics.h>
#include<math.h>
#include<dos.h>
using namespace std;
int X,Y;
float C[3][3];
void matrixmultiply(float A[3][3],float B[3][1])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			C[i][j]=0;
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<1;j++)
		{
			for(int k=0;k<3;k++)
			C[i][j]+=A[i][k]*B[k][j];
		}
	}
}

void scaling(int x,int y,int x1,int y1,int x2,int y2,int x3,int y3)
{
	x2=x2*x-x1;
	x3=x3*x-x1;
	y2=y2*y-y1;
	y3=y3*y-y1;
	
	line(X-x1,Y+y1,X-x2,Y+y2);
	line(X-x1,Y+y1,X-x3,Y+y3);
	line(X-x3,Y+y3,X-x2,Y+y2);
	
}

void translation(int x,int y,int x1,int y1,int x2,int y2,int x3,int y3)
{
	x1=x1+x;
	y1=y1+y;
	x2=x2+x;
	x3=x3+x;
	y2=y2+y;
	y3=y3+y;
	
	line(X-x1,Y+y1,X-x2,Y+y2);
	line(X-x1,Y+y1,X-x3,Y+y3);
	line(X-x3,Y+y3,X-x2,Y+y2);
	
}

void rotation(int theta,int x1,int y1,int x2,int y2,int x3,int y3)
{
	float A[3][3]={{0,-1,0},{1,0,0},{0,0,1}};
	float B[3][1]={{x1},{y1},{1}};
	matrixmultiply(A,B);
	int xx1=x1;
	int yy1=y1;
	
	float D[3][1]={{x2},{y2},{1}};
	matrixmultiply(A,D);
	int xx2=C[0][0];
	int yy2=C[1][0];
	
	float E[3][1]={{x3},{y3},{1}};
	matrixmultiply(A,E);
	int xx3=C[0][0];
	int yy3=C[1][0];
	
	line(X-xx1,Y+yy1,X-xx2,Y+yy2);
	line(X-xx1,Y+yy1,X-xx3,Y+yy3);
	line(X-xx3,Y+yy3,X-xx2,Y+yy2);
	//cout<<xx1<<endl<<yy1;
	//cout<<cos(60);
}


int main() {
  
	initwindow(800,700,"Translation");
	X=getmaxx();
	Y=getmaxy();
	rectangle(0,0,X,Y);
	line(0,Y/2,X,Y/2);
	line(X/2,0,X/2,Y);
	X=X/2;
	Y=Y/2;
	
	line(X-50,Y+50,X-150,Y+150);
	line(X-50,Y+50,X-100,Y+200);
	line(X-100,Y+200,X-150,Y+150);
	
	cout << "Please enter your choise.: " << endl;
	cout << "1. Scaling." << endl;
	cout << "2. Translation." << endl;
	cout << "3. Roatation." << endl;
	
	int x;
	cin >> x; 
	switch(x)
	{
		case 1:
			scaling(2,2,50,50,150,150,100,200);
			break;
		case 2:
			translation(60,70,50,50,150,150,100,200);
			break;
		case 3:
			rotation(60,50,50,150,150,100,200);
			break;
		default:
			cout << "You choose wrong number.";	
			break;
	}
	
	
	while(!kbhit())
	{
		delay(100);
	}

    return 0;
}

