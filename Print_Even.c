//write a program which accept one number from user and print that number of even numbers on screen

//Input : 7
//Output :2 4 6 8 10 12 14 
//////////////////////////////////////////////////////////////////
#include<stdio.h>
void PrintEven(int iValue)
{
    int iCnt=0;
    iCnt=1;

    if(iValue<=0)
    {
        return;
    }

    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        if((iCnt % 2)==0)
        {
            printf(" %d\t ",iCnt);
        }
    }
}
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);  //5

    PrintEven(iValue);
}
