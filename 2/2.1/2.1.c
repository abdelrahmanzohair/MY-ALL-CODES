//**********************************************************

/*
Author : Abdulrahman Zohair Suleiman Isa
Department : Mechatronics and Robotics Engineering
Specialization : Embedded Software Engineering
*/

//**********************************************************
/*****************************    Linear Search Algorithm    ********************************/

//include stdio.h library to use printf function
#include <stdio.h>
//define the main function
void main(void)
{
	/*make a 10 variables to take the values from user
	then we make a variable called search to compare it
	with the entered values a,b,c,d,e,f,g,h,i,j*/
	
	int a,b,c,d,e,f,g,h,i,j;
	int search;
	
	/*we make another variable to when the value is not exist
	the program move into int k = 0 and print value not exist ( equals )*/
	
	//any value of k that equals to line number 126
	
	/*k = 0 or any value except the values in case of the number that the
	user enter it is found*/
	int k = 0;
	
	//take the value from user and store it in its address
	
	printf("enter number 1 : ");
	scanf("%d",&a);
	printf("enter number 2 : ");
	scanf("%d",&b);
	printf("enter number 3 : ");
	scanf("%d",&c);
	printf("enter number 4 : ");
	scanf("%d",&d);
	printf("enter number 5 : ");
	scanf("%d",&e);
	printf("enter number 6 : ");
	scanf("%d",&f);
	printf("enter number 7 : ");
	scanf("%d",&g);
	printf("enter number 8 : ");
	scanf("%d",&h);
	printf("enter number 9 : ");
	scanf("%d",&i);
	printf("enter number 10 : ");
	scanf("%d",&j);
	
	//ask the user to enter the value to search and store it at the address of int search
	printf("enter the value to search : ");
	scanf("%d",&search);
	
	/*if the value that the user entered to search it equals any value which the user
	entered it before the program will tell the user about its place and so on ... */
	
	if( search == a)
	{
		printf("value is exist at element number 1\n");
		//suppose k with any number except 0
		k = 1;
	}
	if( search == b)
	{
		printf("value is exist at element number 2\n");
		//suppose k with any number except 0
		k = 1;
	}
	if( search == c)
	{
		printf("value is exist at element number 3\n");
		//suppose k with any number except 0
		k = 1;
	}
	if( search == d)
	{
		printf("value is exist at element number 4\n");
		//suppose k with any number except 0
		k = 1;
	}
	if( search == e)
	{
		printf("value is exist at element number 5\n");
		//suppose k with any number except 0
		k = 1;
	}
	if( search == f)
	{
		printf("value is exist at element number 6\n");
		//suppose k with any number except 0
		k = 1;
	}
	if( search == g)
	{
		printf("value is exist at element number 7\n");
		//suppose k with any number except 0
		k = 1;
	}
	if( search == h)
	{
		printf("value is exist at element number 8\n");
		//suppose k with any number except 0
		k = 1;
	}
	if( search == i)
	{
		printf("value is exist at element number 9\n");
		//suppose k with any number except 0
		k = 1;
	}
	if( search == j)
	{
		printf("value is exist at element number 10\n");
		//suppose k with any number except 0
		k = 1;
	}
	
	//if the number is not exist so there no order except k = 0 to being print
	if( k == 0 )
	{
		printf("value is not exist");
	}
}