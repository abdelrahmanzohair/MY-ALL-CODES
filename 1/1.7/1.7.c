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
	//call the main function
	/*make the variables to save values in it and
	doing logic operators and print it*/
	
	int x =7;
	/*
	explanation of access on specific bit
	00000111 = 7 decimal
	01000000 (i am doing left shift with 6)
	01000111 (i did root or with shift)
	*/
	
	/*
	the code :
	x=x|(1<<6);
	printf("x = %d \n",x);
	*/
	int y =4;
	//and logic
	int Z = x&y;
	//or logic
	int K = x|y;
	//xor logic
	int M = x^y;
	//bitwise right shift the x in binary with value 1
	int L = x >> 1;
	
	//bitwise left shift the y in binary with value 2
	int N = y << 2;
	
	/* %d the speciefr to print decimal and \n to move to next line
	and the values of Z.K,M,L,N to print values of its operators
	and,or,xor,right shift and left shift */
	
	printf("Z = %d \n",Z);
	printf("K = %d \n",K);
	printf("M = %d \n",M);
	printf("L = %d \n",L);
	printf("N = %d ",N);
}