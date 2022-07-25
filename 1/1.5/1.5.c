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
{
	//ask the program to print next order
	printf("Please enter the value: ");
	//make a garbage variable
	int x;
	//get the value from the user
	scanf("%d",&x);
	//print the value that the user entered it
	printf("The value you entered is : %d",x);
}