#include<stdio.h>
 
int main(void)
{
 
  int number1;
  int number2;
  int x,y;

  printf("      This Program help you to calculate the LCM between 2 number ");
  printf("\n\nEnter number1 : ");
  scanf("%d",&number1);
  printf("\n\nEnter number2 : ");
  scanf("%d",&number2);
 
  x=number1;
  y=number2;
 
  while(number1!=number2)
  {
 
      if(number1>number2)
 
           number1=number1-number2;
 
      else
 
      number2=number2-number1;
 
  }
 
  printf("\n\nL.C.M is equal to %d\n\n",x*y/number1);
  printf(" \n\n\n\n"
	      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");
 
  return 0 ;
}