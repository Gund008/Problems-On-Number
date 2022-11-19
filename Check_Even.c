//Accept number from user and check whether number is even or odd

#include<stdio.h>  //preprocessor check header file
#define  TRUE 1   //Macro replacement by Preprocessor
#define  FALSE 0

typedef  int BOOL; 

///////////////////////////////////////////////////////////////////////
BOOL ChkEven(int iNo)
{
     int iValue=0;
     iValue=iNo % 2;
     if(iValue==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    BOOL bret=0;

    printf("Enter number:");
    scanf("%d",&iValue);

   bret= ChkEven(iValue);

   if(bret==1)
   {
     printf("%d  Number is even",iValue,bret);
   }
   else
   {
    printf("%d Number is odd",iValue,bret);
   }
    return 0;

}