#include<stdio.h>

void main()
{
     //Question Number 03:
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
