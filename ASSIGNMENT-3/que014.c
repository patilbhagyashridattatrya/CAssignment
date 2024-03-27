/*
Write a program to accept a number and check whether it is Prime no.
*/
 #include<stdio.h>
  int main()
  {
	int num, flag=0;

	printf("Enthe thr number:");
	scanf("%d"  , &num);

	for (int i=2; i=<num/2; i++)
	{ 
		if(num % i == 0)
		{
		flag=1;
		break;
		}
	}
	
	if (flag)	
		printf("entered number is prime..!\n");
	

	else
		printf("entered number is not prime..!\n");


  return 0;
  }
