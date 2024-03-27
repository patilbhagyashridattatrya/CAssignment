 /*Write a program to find factorial of given number.Input: 5
Output: 5 * 4 * 3 * 2 * 1 = 120

*/


 #include<stdio.h>
  int main()
  {
	int num, fact=1, i=5;

	num=1;

	while(i>1)
	{
	fact*=i;
	i--;
	}
	printf("5*4*3*2*1=%d\n", fact);



  return 0;
  }
