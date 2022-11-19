//write a program which Accept Number from user and print even Number of that factors
//number.

//Input :24
//output :1 2 3 4 6 8 12

//////////////////////////////////////////////////////////////////////

#include<stdio.h>
////////////////////////////////////////////////////////////////////
//Time Complexity :-O(n/2)
void DisplayFactor(int iNo)
{
   int iCnt=0;
   iCnt=1;

   if(iNo<=0)  //updator
   {
      iNo=-iNo;
   }

   for(iCnt=1;iCnt<=(iNo/2);iCnt++)
   {
      if((iNo % iCnt)==0)
      {
         printf("%d\t",iCnt);
      }
   }
}
////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    
    return 0;
}