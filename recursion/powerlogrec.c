#include<stdio.h>
int powerlog (int a,int b){
 if (b==0) return 1;
 if (b==1) return a;
 int x = powerlog (a,b/2) ;
if (b%2==0){  //even
    return x*x;
}
else{
    return x*x*a;  //odd
}
}

int main(){
int a;
printf("enter base:");
scanf("%d",&a);
int b;
printf("enter exponent:");
scanf("%d",&b);
int p = powerlog (a,b);
printf("%d raised to the power %d is %d",a,b,p);

    return 0;
}