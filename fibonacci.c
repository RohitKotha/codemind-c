#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,num;    
   
 scanf("%d",&num);    
 printf("0 1");

 for(i=2;i<num;++i)    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 } 
