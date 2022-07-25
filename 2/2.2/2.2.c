//**********************************************************

/*
Author : Abdulrahman Zohair Suleiman Isa
Department : Mechatronics and Robotics Engineering
Specialization : Embedded Software Engineering
*/

//**********************************************************

//***************************   Security System   **************************************//

//include stdio.h library to use printf function
#include <stdio.h>
//define the main function
void main(void)
{
	/*make two int variable*/
	int id;
	int password;
	//ask the user to enter ID
	printf("please enter your ID : ");
	//store the value that the user enter it at variable id
	scanf("%d",&id);
	
	//condition if id = 1234
	if( id == 1234 )
	{	
		/*ask the user to enter password
		and stor it at variable password*/
		
		printf("please enter your password : ");
		scanf("%d",&password);
		
		/*nested if so that the program working well
		and no repeated or rejected output*/
		if( password == 123)
		{
		printf("welcome Abdulrahman");
		}
		else if( password != 123)
		{
		printf("incorrect password");
		}
	}
	/*if the id isn't equal 1234 the program will print incorrect id*/
	else if( id != 1234)
		{
			printf("incorrect ID");
		}
}