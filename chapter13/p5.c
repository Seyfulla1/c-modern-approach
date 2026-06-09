#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) // I used pointer arithmetic this time for fun
{
	int sum=0;
	argv++;
	for(;*argv;argv++)
	{
		sum+=atoi(*argv);
	}
	printf("Total: %d\n",sum);
	return 0;
}
