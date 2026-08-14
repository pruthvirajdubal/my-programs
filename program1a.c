#include<stdio.h>
/*  PROGRAM DIVIDE TWO NUMBER*/
 int  NumDivide( int no1,int no2)
{
    int Ans=0;

    if(no2==0 )
    
        return -1;
    
    Ans=no1/no2;
    return Ans;
}
int main ()
{
    int ivalue1 =15,ivalue2=5;
    int iRet=0;

    iRet =  NumDivide(ivalue1,ivalue2);

    printf("Division is %d",iRet);

    return 0;
}