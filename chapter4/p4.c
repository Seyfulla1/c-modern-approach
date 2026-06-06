#include <stdio.h>

int main(void)
{
	int user_input;
	int result=0;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d",&user_input);
	result+=user_input%8;
	user_input/=8;
	result+=user_input%8 * 10;
	user_input/=8;
	result+=user_input%8 * 100;
	user_input/=8;
	result+=user_input%8 * 1000;
	user_input/=8;
	result+=user_input%8 * 10000;
	printf("%.5d\n",result);
	return 0;
}
