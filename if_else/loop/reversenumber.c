#include<stdio.h>
int main (){
int n;
printf("enter a number:");
scanf("%d",&n);
 int r = 0;
while (n>0){
 r = r*10;
  r = r + (n%10);
  n = n/10;
}

// wAP TO PRINT THE SUM OF GIVEN NUMBER AND ITS REVERSE......

// INCOMPLETE .....
// int sum = 0;
// sum = n+r;


// printf("The sum of number is%d",n,r);
 return 0;

}