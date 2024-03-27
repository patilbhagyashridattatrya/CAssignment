//Write a program to accept number and check whether the number is +ve, -ve and zero.

#include<stdio.h>
int main()
{
int num;
printf("Enter the number:");
scanf(" %d" , &num);

if (num>0)
	{
	printf("Number is positive..!\n");
	}

else if (num<0)
	{
	printf("Number is negative..!\n");
	}

else 
	{
	printf("Number is zero.!\n");
	}
return 0;
}
