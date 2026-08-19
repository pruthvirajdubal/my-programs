#include<stdio.h>
//input:4
//output:4 8 12 16  20
void DisplayNum(int ino)
{
    for(int i=1;i<=5;i++)
    {
        printf("%d ",ino*i);
    }

}
int main ()
{
    int ivalue = 0;

    printf("Enter the nuber:");
    scanf("%d",&ivalue);

    DisplayNum(ivalue);


    return 0;
}