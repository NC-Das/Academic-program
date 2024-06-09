#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void ClipLine(int Xmin,int Ymin, int Xmax, int Ymax, int ax, int ay, int bx, int by, int A[], int B[])
{
	cout<<"Please Enter the any key";
	getch();
	double xnew, ynew, m;
	m=(by-ay)/(bx-ax);
	if(A[0]==0 && A[1]==0 && A[2]==0 && A[3]==0 && B[0]==0 && B[1]==0 && B[2]==0 && B[3]==0)
	{
		cout<<"Line is visible"<<endl;
		rectangle(Xmin, Ymin, Xmax, Ymax);
		line(ax, ay, bx, by);
	}
	
	else if(A[0]&&B[0] || A[1]&&B[1] || A[2]&&B[2] || A[3]&&B[3] )
	{
		cout<<"Line is Invisible"<<endl;
	}
	
	else
	{
		if(A[3]==1)
		{
		  ynew= m*(Xmin-ax)+ay;
		  setcolor(15);
		  rectangle(Xmin, Ymin, Xmax, Ymax);
		  setcolor(0);
		  line(ax, ay, bx, by);
		  setcolor(YELLOW);
		  line(Xmin, ynew, bx, by);
		}
		
		else if(A[2]==1)
		{
		  ynew= m*(Xmax-ax)+ay;
		  setcolor(15);
		  rectangle(Xmin, Ymin, Xmax, Ymax);
		  setcolor(0);
		  line(ax, ay, bx, by);
		  setcolor(15);
		  line(Xmax, ynew, bx, by);
		}
		
		else if(A[1]==1)
		{
		  xnew= ((Ymin-ay)/m)+ax;
		  setcolor(15);
		  rectangle(Xmin, Ymin, Xmax, Ymax);
		  setcolor(0);
		  line(ax, ay, bx, by);
		  setcolor(15);
		  line(xnew, Ymin, bx, by);
		}
		
		else if(A[0]==1)
		{
		  xnew= ((Ymax-ay)/m)+ax;
		  setcolor(15);
		  rectangle(Xmin, Ymin, Xmax, Ymax);
		  setcolor(0);
		  line(ax, ay, bx, by);
		  setcolor(15);
		  line(xnew, Ymax, bx, by);
		}
	}
}

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm , "Cohensutherland");
	int Xmin= 30, Ymin=30, Xmax=110, Ymax= 90;
	rectangle(Xmin, Ymin, Xmax, Ymax);
	int ax=(Xmin-2), ay=(Ymin+5), bx=(Xmin+10), by=(Ymin-1);
	
	line(ax, ay, bx, by);
	
	int A[4], B[4];
	
	if((ay-Ymax)<0)
	   A[0]=0;
	else A[0]=1;
	
	if((Ymin-ay)<0)
	   A[1]=0 ;
	else A[1]=1;	
	
	if((ax-Xmax)<0)
	   A[2]=0 ;
	else A[2]=1;	
	
	if((Xmin-ax)<0)
	   A[3]= 0 ;
	else A[3]=1;
	
	for(int i=0; i<4; i++)
	cout<<A[i];
	cout<<endl;
	
	
	if((by-Ymax)<0)
	   B[0]=0;
	else B[0]=1;
	
	if((Ymin-by)<0)
	   B[1]=0 ;
	else B[1]=1;	
	
	if((bx-Xmax)<0)
	   B[2]=0 ;
	else B[2]=1;	
	
	if((Xmin-bx)<0)
	   B[3]= 0 ;
	else B[3]=1;
			
	for(int i=0; i<4; i++)
	cout<<B[i];
	
	ClipLine(Xmin, Ymin, Xmax, Ymax, ax, ay, bx, by, A, B);
	
	while(!kbhit())
	{
		delay(200);
	}
	return 0;
}
