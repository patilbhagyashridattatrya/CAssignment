/*
Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
******
*/


 #include<stdio.h>
  int main()
  {
	
	char ch;
	int i=0;
	
	printf("enter the character:");
	scanf("%c", &ch);

	while (i<=6)
	{
	printf("%c", ch);
	i++;
	}
	
	printf("\n");

  return 0;
  }

