#include <stdio.h>
int main (){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int sum =0;
int lastDigit =0;
while (n!=0){
    lastDigit = n%10; //ld =5
    sum= sum +lastDigit;  //WAP to print sum of digits of a given no.
    n=n/10;
}
printf("The sum of digits are %d",sum);
  return 0;
}