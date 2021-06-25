#include <stdio.h>


int palin(int num,int rev){

 int n,r;
 n=num;
 r=rev;
 if(r==n)
  printf("%d,is a palindrome.\n",n);
 else
  printf("%d,is not a palidrome.\n",n); 
return 0;
}

int main() {
  int n,o, rev = 0, remainder;
   printf("Enter an integer: ");
   scanf("%d", &n);
   o=n;
   for(n;n!=0;n/=10) {
      remainder = n % 10;
      rev = rev * 10 + remainder;
     
    }
    printf("Reversed number = %d\n", rev);
  palin(o,rev);
  
  return 0;
     
}

