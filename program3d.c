#include<stdio.h>

//Input:a output:A
//Input:D output:d

void DisplayConvert(char cvalue)
{
    if (cvalue >= 'A' && cvalue<='Z')
    {
        cvalue =cvalue+32;
        printf("%c",cvalue);
    }
    else if (cvalue >= 'a'  && cvalue <= 'z')
    {
        cvalue =cvalue-32;
        printf("%c",cvalue);
    }
    
}
int main()
{
        char cvalue ='\0';

        printf("Enter character\n");
        scanf("%c",&cvalue);

        DisplayConvert(cvalue);



    return 0;
}