#include <stdio.h>


int sum_array(const int *a, int n);

int main(void)
{
	int arr[5]={1,7,8,3,2};
	printf("%d", sum_array(arr,5));
	return 0;
}


int sum_array(const int *a, int n)
{
	int sum=0;
	while( n>0 )
	{
		sum+= *a++;
		n--;
	}
	return sum;

}
