#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
void main()
{
	int gd=DETECT,gm,val;
	char* str;
	float x[10],y[10];
	clrscr();
	cout<<"How many values do you want to enter?"<<endl;
	cin>>val;
	cout<<"Enter the x and y co-ordinates of the points to be plotted:"<<endl;
	for(int i=0;i<val;i++)
	{
		aa:
		cin>>x[i]>>y[i];
		if(x[i]<=getmaxx()&&y[i]<=getmaxy())
		{
			cout<<"You have entered the value that is out of bound kindly enter the values again"<<endl;
			goto aa;
		}
	}
	clrscr();
	initgraph(&gd,&gm,"C://TC//BGI");
	line(25,80,25,450);
	line(25,450,450,450);
	outtextxy(0,450,"0");
	outtextxy(0,400,"50");
	outtextxy(0,350,"100");
	outtextxy(0,300,"150");
	outtextxy(0,250,"200");
	outtextxy(0,200,"250");
	outtextxy(0,150,"300");
	outtextxy(0,100,"350");
	outtextxy(50,455,"50");
	outtextxy(100,455,"100");
	outtextxy(150,455,"150");
	outtextxy(200,455,"200");
	outtextxy(250,455,"250");
	outtextxy(300,455,"300");
	outtextxy(350,455,"350");
	outtextxy(400,455,"400");
	for(i=0;i<val-1;i++)
	{
		circle(25+x[i],450-y[i],2);
		line(25+x[i],450-y[i],25+x[i+1],450-y[i+1]);
		circle(25+x[i+1],450-y[i+1],2);
	}
	getch();
	closegraph();
}