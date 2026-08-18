#include<stdio.h>
/*ACCEPT THE NUMBER FROM USER AND RETURN DIFFRNNCE SUMMATION OF ALL ITS 
FACTOE AND NON FACTOR
IN:12
OP:-34
IN:10
OP:-29*/
int FactDif(int ino)
{
    int i=0;
    int iSum=0;
    int sumNonFact=0;

    for ( i = 0; i < ino; i++)
    {
        if (ino % i==0)
        {
            sumNonFact= sumNonFact *i;
        }
        else
        {
            sumNonFact =sumNonFact+i;
        }
        
    }
    return(sumNonFact-sumNonFact);
    
}

int main ()
{
        int ivalue=0;

        int iRet =0;

        printf("Enter the nunber:");
        scanf("%d",&ivalue);

        iRet=FactDif(ivalue);


        printf("Diffrence=%d",iRet);

        return 0;

} 