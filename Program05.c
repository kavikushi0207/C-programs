#include<stdio.h>
//NAME : KUSHANI P.G.K.M.
//REG NO. : EG/2018/3375
void main()
{
    //question number 01:
    /*int sum = 0;
    for(int i=0;i<100;i++)
    {
        if(i%7 == 0)
        {
            sum += i;
        }
    }
    printf("The sum of multiples of 7, between 0 and 100 : %d\n",sum);

    //question number 02:
    int limit,sum=0,squard_sum=0,cubic_sum=0,i;
    printf("Enter the limit that you want:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        sum += i;
        squard_sum += i*i;
        cubic_sum += i*i*i;
    }
    printf("The sum of numbers: %d\n",sum);
    printf("The sum of squares: %d\n",squard_sum);
    printf("The sum of cubes: %d\n",cubic_sum);*/

    //question number 03
    float i;
    printf("  Temperature (C) \t    Temperature (F)\n\n");
    printf("---------------------------------------------\n");
    for (i=30;i<51;i++)
    {
        float Fvalue= i/5 * 9 +32 ;
        printf("\t%.1f \t\t|\t %.1f\n",i,Fvalue);
    }
    printf("---------------------------------------------\n");
}
