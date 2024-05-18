#include <stdio.h>
int main (){
  int n;
  printf("enter a number :") ; 
  scanf("%d",&n);

  int a=0;
  for (int i=2;i<=n-1;i++){
        if(n%i==0){  // i is a factor of n 
           // printf("the given number is composite");
             a=1 ;  //if ye condition hit hogi to a me 1 store ho jayega
            break;
        }
  }
   if (n==1) printf("1 is neiher prime nor composite\n");
   else if (a==0)  printf("the given numb is prime\n");
   else printf("the given numb is composite\n");
     return 0;
}