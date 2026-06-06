#include <stdio.h>

#define SIZE 25
void selection_sort(int len, int arr[len]);

int main(void)
{
	int arr[SIZE];
	int i=0;
	for(;i<SIZE;i++)
	{
		int num;
		printf("Enter a number: ");
		scanf(" %d", &num);
		if(num==-1)
		{
			break;
		}
		arr[i]=num;
	}
	selection_sort(i, arr);
	for(int j=0; j<i;j++)
	{
		printf("%d ",arr[j]);
	}
	return 0;
}


void selection_sort(int len, int arr[len])
{
	if(len<=1)
	{
		return;
	}
	int max_ind=0;
	for(int i=1;i<len;i++)
	{
		if(arr[max_ind]<arr[i])
		{
			max_ind=i;
		}	
	}
	int temp=arr[len-1];
	arr[len-1] = arr[max_ind];
	arr[max_ind]=temp;
	selection_sort(len-1, arr);
}

