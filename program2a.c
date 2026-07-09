#include<stdio.h>
/*
PRINT THE  *
*/

        void Display(int ino)
        {
            int icnt=0;
            while(icnt<5)
            {
                printf("*");
                icnt++;
            }
        }
        int main ()
        {
                int ivalue=0;
                printf("Enter the number");
                scanf("%d",&ivalue);

                Display(ivalue);


             return 0;
        }



    
