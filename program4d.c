#include<stdio.h>
/*
AACEPT NUMBER AACEPT FROM USER AND RETURN SUMMATION OF ALL ISt*/
//in:12
//op:50
//in:10
//op:37

int SumNonFact(int ino)
{
    int isum=0;
    int i=0;

    for (i=0;i<ino;i++)
    {
       if(ino % i !=0)
       {
        isum =isum+i;
       }
    }
    return isum;
    
}
int main()
{
    int ivalue= 0;
    int iRet =0;

    printf("Enter the nuber:");
    scanf("%d",&ivalue);

    iRet=SumNonFact(ivalue);
    
    printf("summation of non factor =%d",iRet);

    return 0;
}