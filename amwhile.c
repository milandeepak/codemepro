#include<stdio.h>

int main(){

 int n,num,a,rev=0;
 printf("Enter no:");
 scanf("%d",&num);
 n=num;
 while(num!=0){
   a= num % 10;
   rev+=a*a*a;
   num=num/10;
 }
 if(n==rev) 
  printf("Amstrong number\n");
 else
 printf("Not an Amstrong number\n"); 
 printf("\n");
 return 0; 

}
