#include<stdio.h>

void main()
{
    int lower_limit,upper_limit,sum=0;
    printf("Enter the lower limit:");
    scanf("%d",&lower_limit);
    printf("Enter the upper limit:");
    scanf("%d",&upper_limit);
    for (int i=lower_limit;i<=upper_limit;i++)
    {
        if(i%3 != 0)
        {
            sum += i;
        }
    }
    printf("The sum is : %d\n",sum);
}

