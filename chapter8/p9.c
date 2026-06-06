#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10
#define NUM_OF_LETTERS 26
#define NUM_OF_DIRECTIONS 4
int main(void)
{

	int arr[10][10];

	//initialize array with . (dot)
	for(int i=0;i<SIZE; i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			arr[i][j]='.';
		}
	}
//---------------------------------------------------
	int x=0;
	int y=0;
	srand( (unsigned) time(NULL) );
	arr[x][y]='A';
	int i=1;
	while(i<NUM_OF_LETTERS)
	{
		if ((x - 1 < 0    || arr[x - 1][y] != '.') &&
		(y + 1 >= SIZE || arr[x][y + 1] != '.') &&
		(x + 1 >= SIZE || arr[x + 1][y] != '.') &&
		(y - 1 < 0    || arr[x][y - 1] != '.'))
		{
			break;
		}

		int direction = rand() % NUM_OF_DIRECTIONS;
		char value='A'+i;
		switch (direction)
		{
			case 0:
				if(x-1>=0 && arr[x-1][y]=='.')
				{
					--x;
					arr[x][y]=value;
					i++;
				}
				break;
			case 1:
				if(y+1<SIZE && arr[x][y+1]=='.')
				{
					++y;
					arr[x][y]=value;
					i++;
				}
				break;
			case 2:
				if(x+1<SIZE && arr[x+1][y]=='.')
				{
					++x;
					arr[x][y]=value;
					i++;
				}
				break;
			case 3:
				if(y-1>=0 && arr[x][y-1]=='.')
				{
					--y;
					arr[x][y]=value;
					i++;
				}
				break;
		}
	}
//---------------------------------------------------	
	// print array 
	for(int i=0;i<SIZE; i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			printf("%c ",arr[i][j]);
		}
		putchar('\n');
	}


	return 0;
}
