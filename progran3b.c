#include<stdio.h>
/*
ACCEPT NUMBER FROM USER AND PRINT EVEN FACTOR  
INPUT:24
OUTPUT:1  2  4  6  8  12  
*/
void DisplayFactor(int ino)
{
    int i=0;

    if(ino<=0)
    {
        ino =-ino;
    }
    for ( i = 0; i<=ino; i++)
    {
        if(ino % i==0)
        {
            if(i %2==0)
            {
                printf("%d",i);
            }
        }
    }
    
}
int main()
{
    int ivalue=0;

    printf("Enter the number :");
    scanf("%d",&ivalue);

    DisplayFactor(ivalue);

    return 0;
}