#include<stdio.h>
#include<math.h>

void main()
{
    //Question Number 03:
    double val_e_x=1.0,fact=1.0,x;
    printf("Enter a value for x:");
    scanf("%lf",&x);
    for(int a=1;a<10;a++)
    {
        for(int b=1;b<=a;b++)
        {
            fact=fact*b;


        }

        val_e_x = val_e_x + pow(x,a)/fact;

    }
    printf("value of e^%.1lf is %lf\n\n",x,val_e_x);
}
