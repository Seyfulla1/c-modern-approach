#include <stdio.h>
#include <stdbool.h>
bool search( const int *a, int n, int key);


int main(void)
{
	int temperatures[7][24];
	search(*temperatures, 7*24,32);
	return 0;
}

bool search( const int *a, int n, int key)
{
	for(;n>0;n--)
	{
		if(key == *a++)
		{
			return true;
		}
	}
	return false;
}

