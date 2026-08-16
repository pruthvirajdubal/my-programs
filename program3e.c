#include<stdio.h>

//input: E   output:true
//input: d    output:false

typedef int BOOL;
#define TRUE 1
#define FALSE 0

 BOOL CheckVowel( char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||ch=='u' ||
        ch=='A' || ch=='E' || ch=='I'  ||ch=='o'  ||ch=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}
int main ()
{ 
    char cvalue ='\0';
    BOOL bRet =FALSE;

    printf("Enter character:\n");
    scanf("%c",&cvalue);

    bRet=CheckVowel(cvalue);

    if(bRet==TRUE)
    {
        printf("it is vowel:");
    }
    else 
    {
        printf("it is not vowel:");
    }

    return 0;
}