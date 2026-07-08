#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 2
Check(iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}  
int main ()
{
    int ivalue =0;
    BOOL bRet =FALSE;

    printf("enter number:");
    scanf("%d",&ivalue);

    bRet = Check(ivalue);

    if(bRet ==TRUE)
    {
            printf("Divisible by 5");
    }
    else
    {
        printf("not divisibale by 5");
    }
    return 0;
}