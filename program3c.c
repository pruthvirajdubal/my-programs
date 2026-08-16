#include<stdio.h>
//input:36
//output:2  6  12  18

void DisplayEvenFactor(int ino)
{
    int i=0;

    if(ino <=0)
    {
        ino=-ino;
    }
    for ( i = 1; i < ino; i++)
    {
        if (ino %i==0)
        {
            if (i% 2==0)
            {
                printf("%d",i);
            }
            
        }
        printf("");
    }
    
}
int main ()
{
        int ivalue =0;

        printf("Enter Number:\n");
        scanf("%d",&ivalue);

        DisplayEvenFactor(ivalue);

    return 0;
}