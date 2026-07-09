#include<stdio.h>

// print-->*
    void Display(int ino)
{
    while(ino>7)
    {
        printf("*");
        ino--;
    }
    }

int main ()
{
    int ivalue = 0;
    printf("Enter the number:");
    scanf("%d",&ivalue);
    Display (ivalue);
     return 0;
}