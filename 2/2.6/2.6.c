//**********************************************************

/*
Author : Abdulrahman Zohair Suleiman Isa
Department : Mechatronics and Robotics Engineering
Specialization : Embedded Software Engineering
*/

//**********************************************************


//include stdio.h library to use printf function
#include <stdio.h>
//define the main function
void main(void)
{	
	/*define garbage variable x*/
	
	int x;
	
	//ask the user to enter the number
	printf("please enter number : ");
	//take the value of x from the user and store it at the address of x
	scanf("%d",&x); 
	
	/*mod is any number except 0 so is odd*/
	if( x % 2 != 0 )
	{
		printf("number is odd");
	}
	/*mode is zero so number is even*/
	else
	{
		printf("number is even");
	}	
}