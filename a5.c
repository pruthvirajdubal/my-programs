#include<stdio.h>
void Accept(int iNo)
{
    int icnt =0;

    for(icnt=0;icnt<iNo; icnt++)
    {
        printf("*");
    }
}
int main ()
{
    int ivalue =0;
    ivalue =5;
    Accept(ivalue);
    return 0;
}