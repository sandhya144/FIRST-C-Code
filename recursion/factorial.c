#include <stdio.h>
int factorial (int n){
    if (n==1  || n==0) return 1;  // base case --> to end a function....
    int recAns = n*factorial (n-1);
    return recAns;
}


int main (){
int n;
printf("enter a no :");
scanf ("%d",&n);
int fact = factorial(n);
printf("%d",fact);
 return 0;
}