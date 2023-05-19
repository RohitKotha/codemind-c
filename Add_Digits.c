#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    while(a>=10){
        int s=0;
    
    while(a>0){
        s=s+a%10;
        a=a/10;
    }
    a=s;
    }
    printf("%d",a);
}