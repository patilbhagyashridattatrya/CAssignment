/*Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number
Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24

*/
 #include<stdio.h>
  int main()
  {
	int num,m,n, i;
	printf("enter the number:");
	scanf("%d", &num);
	m=num;

	while(i<(m/2))

	{
		if(m%=0)
		{
			n=m/i;
			if(i<n)
			{
			printf("%d*%d=%d\n", i, n, i*n);
		}
			}
			i++;
	}

  return 0;
  }
