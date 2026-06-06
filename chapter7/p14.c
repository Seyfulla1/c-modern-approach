#include <stdio.h>
#include <math.h>
int main(void){
	
	float x; // user input
	double y=0.0;
	double new_y=1.0;
	printf("Enter a number to find the root of: ");
	scanf("%f",&x);
	do{
		y=new_y;
		new_y=(y+x/y)/2;
	}while(fabs(y-new_y)>=0.00001*y);
	printf("%f",y);
	return 0;
}
