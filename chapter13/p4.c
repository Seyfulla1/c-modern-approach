#include <stdio.h>

int main(int argc, char *argv[])
{
	for(int i=argc-1;i>=1;i--)
	{
		printf("%s ",argv[i]);
	}
	putchar('\n');
	return 0;
}
