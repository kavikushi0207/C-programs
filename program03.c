#include<stdio.h>

void main()
{
    //Question Number 02:
    double val_e=1.0,fact=1.0;
    for(int x=1;x<50;x++)
    {
        for(int y=1;y<=x;y++)
        {
            fact=fact*y;
        }
        val_e=val_e+1.0/fact;
    }
printf("value of mathematical constant e is %lf.\n\n",val_e);
}
