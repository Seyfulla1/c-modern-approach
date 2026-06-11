#include <stdio.h>

#define STRINGIZE(x) #x
#define TO_STRING(x) STRINGIZE(x)
#define LINE_FILE "Line " TO_STRING(__LINE__) " of file " __FILE__

int main(void)
{
	const char *str=LINE_FILE;
	puts(str);
	return 0;
}
