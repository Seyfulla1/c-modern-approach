#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top=0;



void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);


int main(void)
{
	char ch;
	bool is_properly_nested=true;
	printf("Enter parentheses and/or braces: ");
	for(;;)
	{

		if((ch=getchar())!='\n')
		{
			if(ch=='(' || ch=='[' || ch=='{')
			{
				push(ch);
			}
			else if (ch==')' || ch==']' || ch=='}')
			{
				char left=pop();
				if(!((ch==')' && left=='(') || 
				   (ch==']' && left=='[') || 
				   (ch=='}' && left=='{')))
				{
					is_properly_nested=false;
					break;
				}	

			}

		}
		else
		{
			if(!is_empty())
			{
				is_properly_nested=false;
			}
			break;
		}
	}
	if(is_properly_nested)
	{
		printf("Properly nested\n");
	}
	else
	{
		printf("Not properly nested\n");
	}
	return 0;
}
//***************************************************************
void make_empty(void)
{
	top=0;
}

bool is_empty(void)
{
	return top==0;
}

bool is_full(void)
{
	return top==STACK_SIZE;
}

void push(char c)
{
	if(is_full())
	{
		printf("Cannot push. Stack is full.\n");
		exit(EXIT_FAILURE);
	}
	contents[top++]=c;
}

char pop(void)
{
	if(is_empty())
	{
		printf("Cannot pop. Stack is empty.\n");
		return '-';
	}
	return contents[--top];
}

