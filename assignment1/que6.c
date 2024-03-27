#include<stdio.h>
int main()
{

int num;
printf("Table of:");
scanf("%d", &num);

for(int i=1; i<=10; i++)
{
int mul =num*i;
printf("%d * %d\n",num, mul);
}
return 0;
}
