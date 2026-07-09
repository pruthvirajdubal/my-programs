#include<stdio.h>
/*
input:12  5
output:12  12   12   12  12
*/

void Display(int ino,int freq)
{
    int i =0;
    for(i=0;i<freq;i++){
        printf("%d",ino);
    }
}
int main ()
{
    int ivalue =0;
    int icnt =0;

    printf("Enter the number:");
    scanf("%d",&ivalue);

    printf("Enter freq");
    scanf("%d",&icnt);

    Display(ivalue,icnt);

    return 0;
}