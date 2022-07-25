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
	int hours;
	int salary;
	/* Ask the user to enter his working hours */
	printf("please enter your working hours : " );
	scanf("%d",&hours);
	
	salary = hours * 50;
	
	if( hours < 40 )
	{
		/* if hours less than 40, deduct 10 % */
		salary = ( salary * 90 )/100;
	}
	printf("your salary is : %d",salary);
}