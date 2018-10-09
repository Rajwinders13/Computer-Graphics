#include <iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int gd=DETECT,gm,i;
	float rx,ry,xc,yc,p,x,y;
	x=0;
	y=ry;
	clrscr();
	cout<<"Enter the co-ordinates of centre of ellipse"<endl;
	cin>>xc>>yc;
	cout<<"Enter radius along x-axis"<<endl;
	cin>>rx;
	cout<<"Enter radius along y-axis"<<endl;
	cin>>ry;
	initgraph(&gd,&gm,"C://TC//BGI");
	putpixel(0,ry,WHITE);
	p=(ry*ry)-(rx*rx*ry)+(1/4)*(rx*rx);
	while((2*ry*ry*x)>=(2*rx*rx*y))
	{
		if(p<0)
		{
			x=x+1;
			putpixel(x+xc,y+yc,WHITE);
			putpixel(x+xc,yc-y,WHITE);
			putpixel(xc-x,y+yc,WHITE);
			putpixel(xc-x,yc-y,WHITE);
			p=p+(2*ry*ry*x)+(ry*ry);
		}
		else
		{
			x=x+1;
			y=y-1;
			putpixel(x+xc,y+yc,WHITE);
			putpixel(x+xc,yc-y,WHITE);
			putpixel(xc-x,y+yc,WHITE);
			putpixel(xc-x,yc-y,WHITE);
			p=p+(2*ry*ry*x)-(2*rx*rx*y)+(ry*ry);
			
		}
	}
	p=(ry*ry)*(x+0.5)*(x+0.5)+(rx*rx)*(y-1)*(y-1)-rx*rx*ry*ry;
	while((2*ry*ry*x)>=(2*rx*rx*y))
	{
		if(p>0)
		{
			y=y-1;
			putpixel(x+xc,y+yc,WHITE);
			putpixel(x+xc,yc-y,WHITE);
			putpixel(xc-x,y+yc,WHITE);
			putpixel(xc-x,yc-y,WHITE);
			p=p-(2*rx*rx*y)+(rx*rx);
		}
		else
		{
			x=x+1;
			y=y-1;
			putpixel(x+xc,y+yc,WHITE);
			putpixel(x+xc,yc-y,WHITE);
			putpixel(xc-x,y+yc,WHITE);
			putpixel(xc-x,yc-y,WHITE);
			p=p+(2*ry*ry*x)-(2*rx*rx*y)+(rx*rx);
		}
	}
	getch();
	closegraph();
}
