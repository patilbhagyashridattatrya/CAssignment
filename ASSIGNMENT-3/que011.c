/*
Write a program to find factorial of given number.
*/


 #include<stdio.h>
  int main()
  {
	int num;

	printf("Enter the given number:");
	scanf("%d", &num);

	int fact=1;
	int i;

	for ( i=1; i<=num; i++);
	{
	fact*=i;

	printf("factorial of %d :%d\n",num, fact);
	}
  return 0;
  }
