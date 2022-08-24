/**********************************************************

/*
Author : Abdulrahman Zohair Suleiman Isa
Department : Mechatronics and Robotics Engineering
Specialization : Embedded Software Engineering
*/


#include <stdio.h>
//prototype for every function
int _ADD_(int x , int y);
int _SUB_(int x , int y);
int _MUL_(int x , int y);
int _DIV_(int x , int y);
int _AND_(int x , int y);
int _OR_(int x , int y);
int _NOT_(int x);
int _XOR_(int x , int y);
int _REM_(int x , int y);
int _INC_(int x );
int _DEC_(int x);

//call
void main(void)
{
	int num1 ;
	int num2 ;
	int id ;
	
	int add,sub,mul,div,and,or,not,xor,rem,inc,dec ;
	
	
	
	printf("Add       >> 1\n");
	printf("Subtract  >> 2\n");
	printf("Multiply  >> 3\n");
	printf("Divide    >> 4\n");
	printf("And       >> 5\n");
	printf("Or        >> 6\n");
	printf("Not       >> 7\n");
	printf("Xor       >> 8\n");
	printf("reminder  >> 9\n");
	printf("Increment >> 10\n");
	printf("Decrement >> 11\n");
	printf("please enter the operation id : ");
	scanf("%d",&id);
	
	switch(id)
	{
		case(1) : 
		printf("please enter the first number : ");
		scanf("%d",&num1);
		printf("please enter the second number : ");
		scanf("%d",&num2);
		
		add = _ADD_(num1 , num2);
		printf("the summation = %d",add);
		break;
	}
	switch(id)
	{
		case(2) : 
		printf("please enter the first number : ");
		scanf("%d",&num1);
		printf("please enter the second number : ");
		scanf("%d",&num2);
		
		sub = _SUB_(num1 , num2);
		printf("the substract = %d",sub);
		break;
	}
	switch(id)
	{
		case(3) : 
		printf("please enter the first number : ");
		scanf("%d",&num1);
		printf("please enter the second number : ");
		scanf("%d",&num2);
		
		mul = _MUL_(num1 , num2);
		printf("the multiply = %d",mul);
		break;
	}
	switch(id)
	{
		case(4) : 
		printf("please enter the first number : ");
		scanf("%d",&num1);
		printf("please enter the second number : ");
		scanf("%d",&num2);
		
		div = _DIV_(num1 , num2);
		printf("the division = %d",div);
		break;
	}
	switch(id)
	{
		case(5) : 
		printf("please enter the first number : ");
		scanf("%d",&num1);
		printf("please enter the second number : ");
		scanf("%d",&num2);
		
		and = _AND_(num1 , num2);
		printf("the and = %d",and);
		break;
	}
	switch(id)
	{
		case(6) : 
		printf("please enter the first number : ");
		scanf("%d",&num1);
		printf("please enter the second number : ");
		scanf("%d",&num2);
		
		or = _OR_(num1 , num2);
		printf("the or = %d",or);
		break;
	}
	switch(id)
	{
		case(7) : 
		printf("please enter the number : ");
		scanf("%d",&num1);
		
		
		not = _NOT_(num1);
		printf("the not = %d ",not);
		break;
	}
	switch(id)
	{
		case(8) : 
		printf("please enter the first number : ");
		scanf("%d",&num1);
		printf("please enter the second number : ");
		scanf("%d",&num2);
		
		xor = _XOR_(num1 , num2);
		printf("the xor = %d",xor);
		break;
	}
	switch(id)
	{
		case(9) : 
		printf("please enter the first number : ");
		scanf("%d",&num1);
		printf("please enter the second number : ");
		scanf("%d",&num2);
		
		rem = _REM_(num1 , num2);
		printf("the reminder = %d ",rem);
		break;
	}
	switch(id)
	{
		case(10) : 
		printf("please enter the number : ");
		scanf("%d",&num1);
	
		
		inc = _INC_(num1);
		printf("the increment = %d",inc);
		break;
	}
	switch(id)
	{
		case(11) : 
		printf("please enter the number : ");
		scanf("%d",&num1);
		
		
		dec = _DEC_(num1);
		printf("the decrement = %d",dec);
		break;
	}
	
	
	
	
	
	
	
}

//implementation every function
int _ADD_(int x , int y)
{
	int ADD;
	ADD = x + y ;
	return ADD;
}
int _SUB_(int x , int y)
{
	int SUB;
	SUB = x - y ;
	return SUB;
}
int _MUL_(int x , int y)
{
	int MUL;
	MUL = x * y ;
	return MUL;
}
int _DIV_(int x , int y)
{
	int DIV;
	DIV = x / y ;
	return DIV;
}
int _AND_(int x , int y)
{
	int AND;
	AND = x & y ;
	return AND;
}
int _OR_(int x , int y)
{
	int OR;
	OR = x | y ;
	return OR;
}
int _NOT_(int x)
{
	int NOT;
	NOT = !x ;
	return NOT;
}
int _XOR_(int x , int y)
{
	int XOR;
	XOR = x ^ y ;
	return XOR;
}
int _REM_(int x , int y)
{
	int REM;
	REM = x % y ;
	return REM;
}
int _INC_(int x )
{
	int INC;
	INC = ++x ;
	return INC;
}
int _DEC_(int x)
{
	int DEC;
	DEC = --x ;
	return DEC;
}