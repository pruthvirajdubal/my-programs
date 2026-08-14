#include<stdio.h>
/*
ACEPT ONE NUMBER AND CHWCK WHETER IS DIVISIBLE BY 5 OR NOT
*/
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check (int ino)
{
    if((ino %5) == 0 )
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
        int ivaule =0;
        BOOL bRet =FALSE;
        printf("Enter number");
        scanf("%d",&ivaule);
        bRet =Check(ivaule);
        if( bRet==TRUE)
        {
            printf("Dvisible by  5");
        }
        else
        {
            printf("not Divisible by 5");
        }

    return 0;
}