//**********************************************************

/*
Author : Abdulrahman Zohair Suleiman Isa
Department : Mechatronics and Robotics Engineering
Specialization : Embedded Software Engineering
*/

//**********************************************************


//include stdio.h library to use printf function
#include <stdio.h>
void main(void)
{
	//define 3 variables
	int x,y,z;
	/*ask the user to enter 3 numbers
	and store it in its variable*/
	
	printf("enter number 1 : ");
	scanf("%d",&x);
	printf("enter number 2 : ");
	scanf("%d",&y);
	printf("enter number 3 : ");
	scanf("%d",&z);
	
	/*conditions to find the maximum value*/
	//first case
	if( x > y)
	{
		if(x > z)
		{
			printf("maximum number is : %d",x);
		}
	
	//second case
	}
	if( y > z)
	{
		if( y > x)
		{
			printf("maximum number is : %d",y);
		}
	}
	
	//third case
	if( z > x)
	{
		if( z > y)
		{
			printf("maximum number is : %d",z);
		}
	}
}