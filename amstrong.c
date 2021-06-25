#include<stdio.h>

int main(){

 int n,num,a,rev=0;
 printf("Enter no:");
 scanf("%d",&num);
 n=num;
 for(num;num!=0;num=num/10){
   a= num % 10;
   rev+=a*a*a;
 }
 if(n==rev) 
  printf("Amstrong number");
 else
 printf("Not an Amstrong number"); 
 printf("\n");
 
 return 0; 

}
