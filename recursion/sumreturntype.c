#include<stdio.h>

int sum (int n){
if (n==1 || n==0) return n;
int recAns = n+ sum(n-1);
return recAns;
}

int main (){
int n;
printf("enter a no:");
scanf("%d",&n);
int fact = sum(n);
printf("%d",fact);
    return 0;
}