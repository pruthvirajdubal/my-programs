#include<stdio.h>

/*ACCEPT NUMBER FROM USER AND DISPLAY NON FACTER NUMBERS*/
//input:12
//output: 5  7  8  9   10  11
//** 

void NonFact (int ino)
{   
    int i;
    int Flage;
     for ( i = ino/3; i < ino; i++)
    {
        if (ino% i !=0)
        {
            printf("%d",i);
            
        }

    }
}
int main()

{   
    int ivalue =0;

    printf("Enter the number:");
    scanf("%d",&ivalue);

    NonFact(ivalue);


    return 0;
}