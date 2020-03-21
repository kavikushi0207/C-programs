#include<stdio.h>

void main()
{
    //Question Number 01:

    int Num;
    int fact=1;
    printf("Enter a non negative integer :");
    scanf("%d",&Num);
    if(Num<0)
    {
        printf("wrong input!");

    }
    else if (Num == 0)
    {
        printf("The factorial of %d is %d\n",Num,1);
    }
    else
    {
        for(int i=Num;i>0;i--)
        {
            fact=fact*i;
        }
        printf("The factorial of %d is %d",Num,fact);
    }

}
