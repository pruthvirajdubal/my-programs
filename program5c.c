#include<stdio.h>
//input:18
//output:1 3 5 7 9 11  13  15 


void Display(int ino)
{
    for(int i=1;i<=ino;i++)
    {
        if(i %2 !=0)
        {
            printf("%d ", i);
        }
    }
}
int main()
{   
    int ivalue =0;

    printf("Enter the number:");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}