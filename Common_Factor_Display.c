#include<stdio.h>

/*
###########################################################################################
##
##  Function Name : CommonFactorDisplay
##  Input : Integer
##  Output : None
##  Description : It is used to Display CommonFactor in Two number.
##  Author : Sukanya Hanumant Gund
##  Date :17/12/2022
##
##########################################################################################
*/

void CommonFactorDisplay(int iValue1,int iValue2)
{
    int iCnt=0;
    
    if(iValue1  < 0)
    {
        iValue1=-iValue1;
    }
    if(iValue2 < 0)
    {
        iValue2=-iValue2;
    }
       
    printf("Common Factor are:\n");
    for(iCnt=1;iCnt<=(iValue1/2)&&(iValue2/2);iCnt++)
    {
        if((iValue1 % iCnt==0) && (iValue2 % iCnt==0))
        {
            printf("%d\n",iCnt);
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo1=0;
    int iNo2=0;
    printf("Please Enter First Number:\n");
    scanf("%d",&iNo1);

    printf("Please Enter Second Number:\n");
    scanf("%d",&iNo2);

    CommonFactorDisplay(iNo1,iNo2);
    

    return 0;
}
