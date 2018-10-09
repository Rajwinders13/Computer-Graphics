#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int x1,x2,y1,y2,i,j,xp,yp,x,y;
	int gd=DETECT;
	int gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	float m;
	clrscr();
	cout<<"Enter the coordinates of first point"<<endl;
	cin>>x1>>y1;
	cout<<"Enter the coordinates of second point"<<endl;
	cin>>x2>>y2;
	m=(y2-y1)/(x2-x1);
	if(m>1 || m<-1)
	{       xp=x1;
		yp=y1;
		putpixel(x1,y1,RED);
		for(i=y1+1;i<y2;i++)
		{
			x=xp+(1/m);
			putpixel(x,i,RED);
			xp=x;
			yp=i;
		}
	}
	else if(m<1 || m>-1)
	{
		xp=x1;
		yp=y1;
		putpixel(x1,y1,RED);
		for(i=x1+1;i<x2;i++)
		{
			y=yp+m;
			putpixel(i,y,RED);
			xp=i;
			yp=y;
		}
	}
	else
	{
		putpixel(x1,y1,RED);
		for(i=x1+1;i<x2;i++)
		{
			putpixel(i,i,RED);
		}
	}
	getch();
	closegraph();
}