#include <stdio.h>

int primeNum(int a){
int result=1;
if(a==1){
result=0;
}
else if(a==2){
result=a;
}
else{
for(int i=2;i<a;i++){
if(a% i==0) {
result=0;
break;
}
}
if(result!=0){
result=a;
}
}
return result;
}
int main(){
    printf("The prime number between 1 and 1000:\n\n ");
    for(int x=1;x<=1000;x++){
    int y=primeNum(x);
    if(y){

        printf("%d\n",y);
    }
    }
    return 0;
}
