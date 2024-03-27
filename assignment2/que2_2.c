/*
Write a program to crate four function calculator. Four functions are +, - , *, /
*/


 #include<stdio.h>
  int main()
  {
	
	float a,b,res;
	char opr;

	printf("enter the elements a opr b:");
	scanf("%f %c %f", &a, &opr, &b);

//	printf("%f %c %f\n", a, opr, b);

	switch(opr)
	{
		case '+':
			res= a+b;

		case '-':
			res=a-b;
			break;
		
		case '*':
			res=a*b;
			break;
		
		case '/':
			res=a/b;
			break;
		
		default:
			printf("invalid operation\n");

	}

	printf("%.2f %c %.2f=%.2f\n", a, opr, b, res);

  return 0;
  }
