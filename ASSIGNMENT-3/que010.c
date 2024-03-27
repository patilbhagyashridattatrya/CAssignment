/*Write a program to print table of given number.
*/
 #include<stdio.h>
  int main()
  {
	int num=2;
	
	printf("Table of 2:\n\n");

	for(int i=1; i<=10; i++)
	{
	int res= num*i;

	printf("%d*%d=%d\n\n", num,i,res);
	
	}

  return 0;
   }
