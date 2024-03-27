/*
Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120
*/


#include<stdio.h>
  int main()
  {
	int num, i=1;
	int fact=1;

	printf("Enter the number:");
	scanf("%d", &num);

	while(i<=num)
	{
	fact*=i;
	i++;
	}

	printf("1*2*3*4*5!=%d\n",fact);
	
  	 return 0;
  }
