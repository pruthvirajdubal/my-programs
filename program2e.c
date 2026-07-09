#include<stdio.h>
#define TRUE 1
#define FALSE 0
/*
CHECK ODD OR EVEN
*/

typedef int BOOL;
int main ()
{
    int num;
    printf("Enter the num:");
    scanf("%d",&num);

    if(num%2==0){
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",num);
    }
    return 0;
}