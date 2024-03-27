 /*Write a program to find maximum of three numbers using
a. If – else
b. conditional operator.
*/

 #include<stdio.h>
  int main()
  {
	int a, b, c, max;

	printf("Enter the Numbers a, b, c:");

	scanf("%d%d%d", &a, &b , &c);

	if(a>b)
	{
	printf(" A is max than b & c\n A=%d\n", a);
	}

	else if(b>c)
	{
	printf(" B is max than a & c\n  B=%d\n",b);
	}

	else 
	printf(" C is max than a & b\n C=%d\n",c);

	max= (a>b && a>c)? a: (b>c)? b:c;

	printf(" max between three numbers:%d , %d & %d =%d\n", a, b, c, c);

  return 0;
  }
