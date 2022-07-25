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
void main (void)
{
	/*ask the user to enter the numbers 1 and 2
	and make two variables so that the function of scanf
	take the values from user and store it at the address
	of two variables x and y*/  	
	int x;
	int y;
	printf("please enter the number a : ");
	scanf("%d",&x);
	printf("plese enter the number b : ");
	scanf("%d",&y);
	
	//doing operators
	int sum = x+y;
	int sub = x-y;
	int and = x&y;
	int or = x|y;
	int xor = x^y;
	
	//print operators
	printf("a + b = %d\n",sum);
	printf("a - b = %d\n",sub);
	printf("a & b = %d\n",and);
	printf("a | b = %d\n",or);
	printf("a ^ b = %d",xor);
}