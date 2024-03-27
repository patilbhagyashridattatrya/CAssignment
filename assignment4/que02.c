/*
Write a function to calculate power. 
*/



#include<stdio.h>
  int main()
  {
	int base,index;

	printf("enter the base & power:");
	scanf("%d %d", &base, &index);
	
	printf("power of %d^%d=%d\n", base, index, mpower(base, index));

  return 0;
  }

 int mpower(int base, int index)
 {

 int p=1;
 for (int i=1; i<=index; i++)
	 p*=base;

return p;
}
