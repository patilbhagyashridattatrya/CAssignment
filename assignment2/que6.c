 /* 
 Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).
*/


 #include<stdio.h>
  int main()
  {

	 int num1,num2;
	 int rev=0, rem, count=0;
	 
	 printf("enter the number:");
	 scanf("%d", &num1);

	 printf("num1=%d", num1);

	 num2= num1;

	 printf("num2=%d" , num2);

	 //reverse the given number

	 while(num1 !=0)
	 {
	 rem=num1%10;
	 rev= rev*10+rem;
	 num1 = num1/10;
	 
	 count++;
	 }

	 if(num2==rev)
	 	printf("given number is palindrome\n");

	else
		printf("given number is not palindrome\n");


  return 0;
  }
