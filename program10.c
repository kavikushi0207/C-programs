#include <stdio.h>

int rightsquare(int a,int b,int c){
    if( (a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a) ){
        return 1;
    }
    else{
        return 0;;
    }
}
int main(){
    int n1,n2,n3;
    int z=0;
    do{
    if (z){
        printf("\n\nError...\nRe enter your numbers......\n\n\n") ;
    }
    z++;
    printf("Enter the first non zero integer: ");
    scanf("%d",&n1);
    printf("Enter the second non zero integer: ");
    scanf("%d",&n2);
    printf("Enter the third non zero integer: ");
    scanf("%d",&n3); }
    while(n1=0 || n2<=0 || n3<=0);
    int x=rightsquare(n1,n2,n3);
    printf("\n \nresult is %d",x);
    return 0;
}
