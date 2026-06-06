#include <stdio.h>
#include <stdbool.h>
bool search( const int *a, int n, int key);


int main(void)
{
	int arr[10]={1,5,32,8,-2,27,222,197,0,-564};
	printf("%d\n", search(arr,10,222));
	printf("%d\n", search(arr,10,-45));
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

