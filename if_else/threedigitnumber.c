#include<stdio.h>
int main(){
int n;
printf("Enter a number :");
scanf("%d",&n);
//if(n>99 && n<1000){
  //printf("it is a three digit number");
//}
//else{
//    printf("it is not a three digit number");

//}
 if (n%5==0 && n%3==0) {
 printf("it is divisible by 5 and 3");
 }
else{
  printf("it is not divisible by 5 and 3");
}



  return 0;
}


