#include<stdio.h>
/*
DISPLAY ITS FACTOR  IN DECRESING ORDER
INPUT:12
OUTPUT:6  4  3  2  1

INPUT:13
OUTPUT:1
*/
//**** 
void FactRve(int no)
{
    int i;
    int flage =0;
    for ( i = no/2; i >=1; i--)
    {
        if (no% i==0)
        {
            printf("%d",i);
            flage=1;
        }
        
    }
    if (flage ==0)
    {
        printf("1");
    }
     

}

int main ()
{
    int ivalue =0;

    printf("Enter the number:");
    scanf("%d",&ivalue);

    FactRve(ivalue);


    return 0;
}