#include <iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int gd=DETECT,gm,i;
	float xc,yc,xp,yp,r,p;
	clrscr();
	initgraph(&gd,&gm,"C://TC//BGI");
	cout<<"Enter the co-ordinates of the center of circle"<<endl;
	cin>>xc>>yc;
	cout<<"Enter the radius of the circle"<<endl;
	cin>>r;
	xp=0;
	yp=r;
	putpixel(xc,r+yc,WHITE);
	putpixel(r+xc,yc,WHITE);
	putpixel(xc,yc-r,WHITE);
	putpixel(xc-r,yc,WHITE);
	p=((float)(5/4))-r;
	while(xp<yp)
	{
		if(p<0)
		{
			xp=xp+1;
			putpixel(xp+xc,yp+yc,WHITE);
			putpixel(yp+yc,xp+xc,WHITE);
			putpixel(yp+yc,xc-xp,WHITE);
			putpixel(xp+xc,yc-yp,WHITE);
			putpixel(xc-xp,yc-yp,WHITE);
			putpixel(yc-yp,xc-xp,WHITE);
			putpixel(yc-yp,xc+xp,WHITE);
			putpixel(xc-xp,yp+yc,WHITE);
			p=p+1+2*xp;
		}
		else
		{
			xp=xp+1;
			yp=yp-1;
			putpixel(xp+xc,yp+yc,WHITE);
			putpixel(yp+yc,xp+xc,WHITE);
			putpixel(yp+yc,xc-xp,WHITE);
			putpixel(xp+xc,yc-yp,WHITE);
			putpixel(xc-xp,yc-yp,WHITE);
			putpixel(yc-yp,xc-xp,WHITE);
			putpixel(yc-yp,xc+xp,WHITE);
			putpixel(xc-xp,yp+yc,WHITE);
			p=p+2*xp-2*(yp)+1;
		}
	}
	getch();
	closegraph();
}