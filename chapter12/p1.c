#include <stdio.h>

#define SIZE 100
void reverse_array(char *arr, int len);


int main(void)
{
	char arr[SIZE];
	char ch;
	int i=0;
	for(;i<SIZE;i++)
	{
		if((ch=getchar())=='\n')
		{	
			break;
		}
		arr[i]=ch;

	}

	reverse_array(arr,i);
	char *ptr_arr= arr;
	for(;i>0;i--)
	{
		putchar(*ptr_arr++);
	}
	return 0;
}

void reverse_array(char *arr, int len)
{
	char *low = arr;
	char *high = arr + len - 1;
	while(low < high)
	{
		char temp = *low;
		*low++ = *high;
		*high-- = temp;
	}
}

