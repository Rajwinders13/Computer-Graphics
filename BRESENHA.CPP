#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int gd=DETECT,gm,i;
	float x1,y1,x2,y2,m,p,yp;
	clrscr();
	initgraph(&gd,&gm,"C://TC//BGI");
	cout<<"Enter the co-ordinates of first point"<<endl;
	cin>>x1>>y1;
	cout<<"Enter the co-ordinates of second point"<<endl;
	cin>>x2>>y2;
	m=(y2-y1)/(x2-x1);
	cout<<endl<<"Slope:"<<m;
	yp=y1;
	if(abs(m)<1)
	{
		putpixel(x1,y1,WHITE);
		if(m>0)
		{
			p=2*(y2-y1)-(x2-x1);
			for(i=x1+1;i<x2;i++)
			{
				if(p<0)
				{
					putpixel(i,yp,WHITE);
					p=p+2*(y2-y1);
				}
				else
				{
					yp=yp+1;
					putpixel(i,yp,WHITE);
					p=p+2*(y2-y1)-2*(x2-x1);
				}
			}
		}
		else if(m<0)
		{
			p=2*(y2-y1)+(x2-x1);
			for(i=x1+1;i<x2;i++)
			{
				if(p<0)
				{
					yp=yp-1;
					putpixel(i,yp,WHITE);
					p=p+2*(y2-y1)+2*(x2-x1);
				}
				else
				{
					putpixel(i,yp,WHITE);
					p=p+2*(y2-y1);
				}
			}
		}
		putpixel(x2,y2,WHITE);
	}
	getch();
	closegraph();
}
