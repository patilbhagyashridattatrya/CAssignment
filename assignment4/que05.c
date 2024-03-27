/*Write a function to print a given character for a given number of times.
*/

 #include<stdio.h>
 void char_ch(char, int);

  int main()
  {
	char c;

//	printf("Enter the char:");
//	scanf("%c", &c);
	
	char_ch('*', 10);
	char_ch('#', 5);
  return 0;
  }

  void char_ch(char ch, int time)
  {
	
  for (int i=0; i<=time; i++)
   printf("%c", ch);
  
  printf("\n");
  }
