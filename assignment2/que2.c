//Input a number and display whether number is Even or Odd.

#include<stdio.h>
int main()
{
int num;

printf(" enter the number: ");

scanf("%d", &num);

//printf(" Number:\n ",num);

if(num%2 ==0)
{
printf(" Number is Even.!\n");
}

else 
printf(" Number is Odd.!\n");

return 0;
}
