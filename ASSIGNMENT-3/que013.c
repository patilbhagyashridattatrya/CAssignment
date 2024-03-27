/*
Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8
*/


 #include<stdio.h>
  int main()
  {
	int prv=1, pre=1, trm, i, n;

	printf("enter the number :");
	scanf("%d", &n);

	printf("fibonacci series %d is:", n);

	printf("%d%d", prv, pre);
	
	for(i=3; i<=n; i++)
	{
	trm=prv+pre;
	printf("%d", trm);
	prv=pre;
	pre=trm;
	}

	printf("\n");


  return 0;
  }
