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
	//call the main function and pass string to it
	/*make to garbage variable and ask the user to
	enter the numbers*/
	
	int x;
	int y;
	printf("please enter the number 1 : ");
	scanf("%d",&x);
	printf("please enter the number 2 : ");
	scanf("%d",&y);
	
	//then we make variable to sum and other to mul
	/*we can't make a variable to sum and another to mul after line 21 in
	the code as the program will take the values from the user and store it
	in the address of all x , so we make sum variable and mul variable
	after we taked the the first and second number from the user*/
	
	int sum = x + y;
	int mul = x * y;
	
	//print the sum and the mul
	printf("a + b = %d\n",sum);
	printf("a * b = %d",mul);
}