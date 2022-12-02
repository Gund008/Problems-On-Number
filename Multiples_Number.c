//write a Program which accept N and print first 5 Multiples of N

//Input : 4
//Output: 4 8 12 16 20 
#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt=1;
    
    for(iCnt=1;iCnt<=iNo+1;iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
    
}
////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;

}