#include<stdio.h>
//input: 4
//output:-4 -3 -2 -1 0 1 2 3 4
void Display(int ino)
{
   for(int i =-ino;i<=ino;i++)
   {
    printf("%d ",i);
   }
}
int main()
{
    int ivalue=0;

    printf("Enter the number");
    scanf("%d",&ivalue);
    
    Display(ivalue);



    return 0;
}