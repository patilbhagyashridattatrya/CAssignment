/*Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.
*/

#include<stdio.h>

int main()
{

int a, b, c;

printf("Enter the Numbers a&b:");
scanf("%d %d", &a, &b);

/*if(a>b)

printf("A is max than B\n");

else
printf("B is max than A\n");
*/

c = (a>b)? a:b;

printf("max between %d & %d is: %d\n", a, b, c);

return 0;

}


