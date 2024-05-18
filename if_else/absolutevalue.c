#include<stdio.h>
int main(){
int n;    //take any integer input
printf("Enter a number : ");   // create a box and enter a number
scanf("%d",&n);    //print or scan that number
if(n<0){       // if n is negative
    n= n*(-1);
}
 printf("The absolute value is : %d" , n);


    return 0;
}
