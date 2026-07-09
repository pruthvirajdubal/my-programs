#include<stdio.h>

void display(int  ino)
{
    if(ino < 10){
        printf("hello\n");        
    }else
    {
        printf("Demo");
    }
}
int main ()
{   int ivalue=0;

    printf("Enter the number:");
    scanf("%d",&ivalue);

    display(ivalue);

    return 0; 
}