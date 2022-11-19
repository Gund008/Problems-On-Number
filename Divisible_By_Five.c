//Accept one number and check whether it is divisible by 5 or not

#include<stdio.h> 

typedef int BOOL;  //typedef existing data_type new_name
#define TRUE 1
#define FALSE 0  //Macro replacement by Preprocessor

BOOL Check(int iNo)
{
    if((iNo % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    BOOL bret=FALSE;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bret=Check(iValue);

    if(bret==TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}