/*Write a program to accept integer values of base and index and calculate power of base to
index.
Input:
base: 2
Output: 32
Input:
base: 8
Output: 512

*/
 #include<stdio.h>
  int main()
  {

  	int base, index, i;
	long power=1;
	printf("Enter the base & index:");
	scanf("%d %d", &base, &index);
	
	for (i=1; i<=index; i++)
	{
	power*=base;
	}
	printf("%d^%d=%ld\n", base, index, power);


  return 0;
  }
