/*Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.*/

#include<stdio.h>
int main()
{
int num1, num2, res;

printf("Enter the num1 and num2:");
scanf("%d, %d", &num1, &num2);
res=num1+num2;

printf("\naddition res=%d\n", res);

res= num1-num2;
printf("diff res=%d\n",res);

printf("product res=%d\n", res=num1*num2);

}


