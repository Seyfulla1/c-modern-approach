#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 100
bool is_palindrome(char *arr, int len);

int main(void)
{
	char arr[SIZE];
	int i=0;
	int ch;
	while(i<SIZE)
	{
		
		if((ch=getchar())=='\n')
		{
			break;
		}
		if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) // could have used isaplha() but this is more fun
		{
			arr[i]=tolower(ch);
			i++;
		}
	}
	
	if(is_palindrome(arr,i))
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}
	return 0;
}

bool is_palindrome(char *arr, int len)
{
	char *low = arr;
	char *high = arr + len - 1;
	while(low < high)
	{
		if(*low++ != *high--)
		{
			return false;
		}
	}
	return true;
}

