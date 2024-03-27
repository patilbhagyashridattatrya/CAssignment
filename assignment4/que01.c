/*
Write a function to calculate factorial of a given number.
%*/
 #include<stdio.h>
int factorial(int);
int main()
  {
	int n; 
	printf("enter the number:");
	scanf("%d", &n);

	printf("%d! factorial :%d\n", n, factorial(n));


  return 0;
  }

 int factorial(int n)
 {

	int fact=1;
 for(int i=1; i<=n; i++)
	fact*=i;
	return fact;

}

