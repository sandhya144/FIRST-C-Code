#include<stdio.h>
int main(){    
int a;
int b;
int c;
printf("Enter first number :");     
scanf("%d",&a);
printf("Enter second number :");
scanf("%d",&b);
printf("Enter third number :");
scanf("%d",&c);
if (a>b && a>c){
    printf("Enter a is the greatest");
}
if (b>a && b>c){
    // printf("Enter b is the greatest");
}
if (c>a && c>b){
    printf("Enter c is the greatest");
}

    return 0;
}