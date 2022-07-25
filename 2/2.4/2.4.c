//**********************************************************

/*
Author : Abdulrahman Zohair Suleiman Isa
Department : Mechatronics and Robotics Engineering
Specialization : Embedded Software Engineering
*/

//**********************************************************


//include stdio.h library to use printf function
#include <stdio.h>
//define the main value
void main(void)
{	
	//define two variables 
	int x = 10;
	int y = 5;
	//3 true . 0 false so true and false is false meaning zero
	int and = 3 && 0;
	/*3 true . 0 false so true or false is true meaning 1
	or any number except 0*/
	int or = 3 || 0;
	//define library of printf to print the required output
	printf("false value in gcc = %d \n",and);
	printf("true value in gcc = %d",or);
}