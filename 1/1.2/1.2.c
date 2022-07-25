//**********************************************************

/*
Author : Abdulrahman Zohair Suleiman Isa
Department : Mechatronics and Robotics Engineering
Specialization : Embedded Software Engineering
*/

//**********************************************************

//include stdio.h library to use printf function

#include <stdio.h>
//define main function
void main(void)
{	//make 3 garbage variable
	int x;
	int y;
	int z;
	//ask user to enter values 
	/*when user enter the number like number 1 the function of scanf
	will store the number at the address of x variable and so on ... */
	printf("please enter the number 1: ");
	scanf("%d",&x);
	printf("please enter the number 2: ");
	scanf("%d",&y);
	printf("please enter the number 3: ");
	scanf("%d",&z);
	//print the numbers that user entered it reversely
	printf("number 3: %d\n",z);
	printf("number 2: %d\n",y);
	printf("number 1: %d",x);
}
