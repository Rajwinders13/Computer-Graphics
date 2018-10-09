#include<stdio.h>
#include<conio.h>
#define FLAG 3
int main()
{
	int matrix[4][4]={1,0,0,1,
					  1,1,1,1,
					  0,1,1,1,
					  0,1,1,1};
	int row,column,r,c;//,count_nb=0;
	for(row=0;row<4;row++)
	{
		for(column=0;column<4;column++)
		{
			int p1,p2,p3,p4,p5,p6,p7,p8;
			p1=matrix[row-1][column-1];
			p2=matrix[row-1][column];
			p3=matrix[row-1][column+1];
			p4=matrix[row][column+1];
			p5=matrix[row+1][column+1];
			p6=matrix[row+1][column];
			p7=matrix[row+1][column-1];
			p8=matrix[row][column-1];
			if(matrix[row][column]==1)
			{
				if(p1==1)
				{
					for(r=row-1;r<row+1;r++)
					{
						for(c=column-1;c<column+1;c++)
						{
							if(matrix[r-1][c-1]==1&&
								matrix[r-1][c]==1&&
								matrix[r-1][c]==1&&
								matrix[r][c+1]==1&&
								matrix[r+1][c+1]==1&&
								matrix[r+1][c]==1&&
								matrix[r+1][c-1]==1&&
								matrix[r][c-1]==1)
							p1=FLAG;;	
							
						}
					}
				}
				if(p2==1)
				{
						for(r=row-1;r<row+1;r++)
						{
							for(c=column-1;c<column+1;c++)
							{
								if(matrix[r-1][c-1]==1&&
								matrix[r-1][c]==1&&
								matrix[r-1][c]==1&&
								matrix[r][c+1]==1&&
								matrix[r+1][c+1]==1&&
								matrix[r+1][c]==1&&
								matrix[r+1][c-1]==1&&
								matrix[r][c-1]==1)
								p2 = FLAG;	
							
							}
						}
				}
				if(p3==1)
				{
						for(r=row-1;r<row+1;r++)
						{
							for(c=column-1;c<column+1;c++)
							{
								if(matrix[r-1][c-1]==1&&
								matrix[r-1][c]==1&&
								matrix[r-1][c]==1&&
								matrix[r][c+1]==1&&
								matrix[r+1][c+1]==1&&
								matrix[r+1][c]==1&&
								matrix[r+1][c-1]==1&&
								matrix[r][c-1]==1)
								p3 = FLAG;	
							}
						}
				}
				if(p4==1)
				{
						for(r=row-1;r<row+1;r++)
						{
							for(c=column-1;c<column+1;c++)
							{
								if(matrix[r-1][c-1]==1&&
								matrix[r-1][c]==1&&
								matrix[r-1][c]==1&&
								matrix[r][c+1]==1&&
								matrix[r+1][c+1]==1&&
								matrix[r+1][c]==1&&
								matrix[r+1][c-1]==1&&
								matrix[r][c-1]==1)
								p4 = FLAG;	
							
							}
						}
				}
				if(p5==1)
				{
						for(r=row-1;r<row+1;r++)
						{
							for(c=column-1;c<column+1;c++)
							{
								if(matrix[r-1][c-1]==1&&
								matrix[r-1][c]==1&&
								matrix[r-1][c]==1&&
								matrix[r][c+1]==1&&
								matrix[r+1][c+1]==1&&
								matrix[r+1][c]==1&&
								matrix[r+1][c-1]==1&&
								matrix[r][c-1]==1)
								p5 = FLAG;	
							
							}
						}
				}
				if(p6==1)
				{
						for(r=row-1;r<row+1;r++)
						{
							for(c=column-1;c<column+1;c++)
							{
								if(matrix[r-1][c-1]==1&&
								matrix[r-1][c]==1&&
								matrix[r-1][c]==1&&
								matrix[r][c+1]==1&&
								matrix[r+1][c+1]==1&&
								matrix[r+1][c]==1&&
								matrix[r+1][c-1]==1&&
								matrix[r][c-1]==1)
								p6 = FLAG;	
							
							}
						}
				}
				if(p7==1)
				{
						for(r=row-1;r<row+1;r++)
						{
							for(c=column-1;c<column+1;c++)
							{
								if(matrix[r-1][c-1]==1&&
								matrix[r-1][c]==1&&
								matrix[r-1][c]==1&&
								matrix[r][c+1]==1&&
								matrix[r+1][c+1]==1&&
								matrix[r+1][c]==1&&
								matrix[r+1][c-1]==1&&
								matrix[r][c-1]==1)
								p7 = FLAG;	
							
							}
						}
				}
				if(p8==1)
				{
						for(r=row-1;r<row+1;r++)
						{
							for(c=column-1;c<column+1;c++)
							{
								if(matrix[r-1][c-1]==1&&
								matrix[r-1][c]==1&&
								matrix[r-1][c]==1&&
								matrix[r][c+1]==1&&
								matrix[r+1][c+1]==1&&
								matrix[r+1][c]==1&&
								matrix[r+1][c-1]==&&
								matrix[r][c-1]==1)
								p8 = FLAG;	
							
							}
						}
				}
				
				if(p1==FLAG||p2==FLAG||p3==FLAG||p4==FLAG||p5==FLAG||p6==FLAG||p7==FLAG||p8==FLAG)
				{
					matrix[row][column]==1;
				}	
			}
		}
	}

	for(row=0;row<4;row++)
	{
		for(column = 0; column<4;row++)
		{
			printf("%d",matrix[row][column]);
		}
		printf("\n");
		
	}
		
}


/*int checkFlag(int row,int column,int *ptr)
{
	ptr=&r;
	int r,c;
	
		for(r=row-1;r<row+1;r++)
			{
				for(c=column-1;c<column+1;c++)
					{
						if(matrix[r-1][c-1]==1&&
						matrix[r-1][c]==0&&
						matrix[r-1][c]==0&&
						matrix[r][c+1]==0&&
						matrix[r+1][c+1]==0&&
						matrix[r+1][c]==0&&
						matrix[r+1][c-1]==0&&
						matrix[r][c-1]==0)
						offset = FLAG;	
							
					}
			}
}*/
