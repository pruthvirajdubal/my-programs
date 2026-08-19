#include<stdio.h>
/* print 
input:8
output:1 2 3 4 5 6 7 8
*/
void Display(int ino)
{
    for(int i=1;i<=ino;i++)
    {
        printf("%d",i);
    }
}
int main ()
{
        int ivalue =0;

        printf("Enter the number");
        scanf("%d",&ivalue);

        Display(ivalue);


    return 0;
}