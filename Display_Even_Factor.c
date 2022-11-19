//Write a program wich accept number from user and print even factor of that number
//Input :36
//Output :2 6 12 18

/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////
void DisplayEvenFactor(int iNo)
{
  int i=0;

  if(iNo<=0)
  {
     iNo=-iNo;
  }
  /*
  for(i=1;i<=(iNo/2);i++)
  {
    if(((iNo % i)==0)&&((iNo % 2)==0))
    {
        printf("%d\t",i);
    }
  }
    */
    for(i=2;i<=(iNo/2);i=i+2)
  {
    if((iNo % i)==0)
    {
        printf("%d\t",i);
    }
  }

}
///////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);
    
    return 0;
}