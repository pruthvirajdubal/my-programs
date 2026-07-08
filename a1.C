// Divide two number
#include<stdio.h>

        int TwoNumDivide(int iNo1,int iNo2)
{
    int iAns =0;
    if(iNo2==0)
    {
        return-1 ;
    }
    iAns= iNo1/iNo2;
    return iAns;

}
        int main ()
        {
            int ivalue1 =15,ivalue2=5;
            int iRet=0;

            iRet=TwoNumDivide(ivalue1,ivalue2);

            printf("Divide is %d",iRet);

            return 0;
        }

   
