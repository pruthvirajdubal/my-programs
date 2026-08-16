#include<stdio.h>
//input:7
//output:2  4  6  8  10  12  14 **

void Even(int ino)
{
    if(ino< 0)
    {
        return ;
    }
  
    //LOGI
    for(int i=1;i<=ino;i++)
    {
        printf("%d",2*i);
    }
}
int main ()
{
    int ivalue =0;

    printf("Enter the number:");
    scanf("%d",&ivalue);
 
     Even(ivalue);

    return 0;
}