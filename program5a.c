#include<stdio.h>
/*Accept number from user and print that number of $ %* on screen
input:5
output:$ * $ * $ * $ * $ *
*/

void  pattern (int ino)
{
    int i;

    for(i=1; i<=ino;i++)
    {
        printf("$*");
    }

}
int main ()
{
    int ivalue =0 ;

    printf("Enter the number:");
    scanf("%d",&ivalue);

    pattern(ivalue);
    return 0;

}