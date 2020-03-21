#include <stdio.h>

int main(){
    int num;
    int n=1;
    while (n){
        printf("\nEnter the checking number:");
        scanf("%d",&num);
    if(num>=0){ n=0;}
    else{
        printf("\nError.....\nRe enter a number...\n");
    } }
    if(num==0 || num==1){
        printf("\n%d is not a prime number \n",num);
    }
    else if(num==2){
        printf("\n%d is a prime number \n",num);
    }
    else{
    int i=2;
    int a=1;
    while(i<num){
    if(num % i==0){
        printf("\n%d is not a prime number \n",num);
        a=0;
        break;
    }
    i++;
    }
    if(a){
        printf("\n%d is a prime number \n",num);
    }
    }
    return 0;
}
