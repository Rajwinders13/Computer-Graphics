#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int ar[5][5];
	int c4=0;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>ar[i][j];
		}
	}
	cout<<"Matrix Entered by you is"<<endl;
	for(i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<ar[i][j]<<"\t";
		}
		cout<<endl;
	}
	int sp=0,cm,cn=0;
	for(i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(ar[i][j]==1)
			{
				if(ar[i][j-1]==1)
				{
					c4++;
					cn++;
				}
				if(ar[i][j+1]==1)
				{
					c4++;
					cn++;
				}
				if(ar[i-1][j]==1)
				{
					c4++;
					cn++;
				}
				if(ar[i+1][j]==1)
				{
					c4++;
					cn++;
				}
			}
			if(cn<2)
			{
				sp=1;
			}
			else
			{
				sp=0;
			}
			cm+=sp;
		}
	}
	cout<<"No of 4 neighbours"<<c4;
	cout<<"Connectivity measurement is:"<<cm;
	getch();
}