//write a program which acceept number from user and return diffrence betwwen summation of all its factor or nonfactors
//Input : 12
//Output :-34   (16-50)

/////////////////////////////////////////////////
#include<stdio.h>

int FactDiff(int iNo)
{
   int iCnt=0;
   iCnt=1;
   int iCnt1=1;
   int iSum=0;
   int iSum1=0;


   for(iCnt=1;iCnt<iNo;iCnt++)
   {
       if((iNo % iCnt)==0)
       {
            iSum=iSum + iCnt;
       }
   }
  
    for(iCnt=1;iCnt<iNo;iCnt++)
   {
       if((iNo % iCnt)!=0)
       {
            iSum1=iSum1 + iCnt;
       }
   }

   int iValue=iSum - iSum1;
   return iValue;
  }
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

   iRet= FactDiff(iValue);
   printf("%d\n",iRet);

    return 0;

}
