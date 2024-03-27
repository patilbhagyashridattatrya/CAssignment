/*Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.*/

#include<stdio.h>
int main()
{

char ch;

printf("Enter the ch:\n");
scanf("%c",&ch);

printf("ch in decimal= %d\n",ch);
printf("ch in hex=%x\n",ch);
printf("ch in octal=%o\n",ch);
printf("ch in char=%c\n",ch);

return 0;
}

