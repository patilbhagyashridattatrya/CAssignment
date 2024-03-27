 /*Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12

*/
 #include<stdio.h>
  int main()
  {
	 int num, i=1;

	 printf("enter the number:");
	 scanf("%d", &num);
	 printf("all factors of %d are:", num);
	 
	 while (i<num)
	 {
	 	if( num% i==0)
			printf("%d\t", i);
		i++;
	}
	
	printf("\n");
	

  return 0;
  }
