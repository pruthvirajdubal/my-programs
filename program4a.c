#include<stdio.h>

//input:  12
//output : 144   (1*2*4*6)

//input:  13
//output : 1   (1)

//nuber chya even ***
int MultiFact (int ino)
{
    int i;
    int iMult =1;
    int flag=0;

    // LOGIC***
    for (i =1;i<=ino ;i++)
    {

        if ((ino % i== 0) && (i % 2==0))
        {
            iMult =iMult*i;
            flag=1;
        }
        
    }
    if (flag==0)
    
        return 1;

        else
        
        return iMult;


}
int main ()
{   
    int ivalue =0;
    int iRet= 0;

    printf("Enter the nuber:");
    scanf("%d",&ivalue);

    iRet = MultiFact(ivalue);

    printf("%d",iRet);

    return 0;

}