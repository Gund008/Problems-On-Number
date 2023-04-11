//write a Program which accept range from user and return addition of all numbers in between that range(Range should contains positive number only)

//Input : 23 30 
//Output :212

//Input :10 18
//Output :126

//Input : -10 2
//Output: Invalid range

//Input:90 18
//Output:Invalid range

////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
      int iCnt=1;
      int iSum=0;
      
      if(iStart<0)               //updator
          {
            iStart=-iStart;
          }
  
      if(iStart<iEnd)
       { 
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
            {
              iSum=iSum + iCnt;
            }
          return iSum;
       }         
       else if(iStart>iEnd)
       {
        return -1;
       }  
       else if(iStart>iEnd)
            {
              return -1;
            }
                 
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter starting point");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);

    if(iRet==-1)
    {
      printf("Invalid range:\n");
    }
    else
    {
      printf("Addtion is %d",iRet);

    }
    return 0;

}
