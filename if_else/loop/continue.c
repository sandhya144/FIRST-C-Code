#include<stdio.h>
int main(){


 for (int i=1; i<=100; i++){
    if (i%2 == 0){  // even
    // i is a factor of n
    continue;  // jab (i%2 =0) condition hit ho to us round ko hi skip kar do
  }
     printf("%d ",i) ;  // to ye print hi na ho

}

 return 0;
}