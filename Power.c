#include<stdio.h>

long int power(int iNo1,int iNo2)
{
    long int iMult=1;
    register int iCnt=0;

    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        iMult=iMult * iNo1;
    }
    return iMult;
}

/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue1=0,iValue2=0;
    long int iRet=0;

    printf("Please Enter the Base:\n");
    scanf("%d",&iValue1);

    printf("Please Enter the Power:\n");
    scanf("%d",&iValue2);

    iRet=power(iValue1,iValue2);
    printf("Result is:%ld",iRet);

    return 0;

}