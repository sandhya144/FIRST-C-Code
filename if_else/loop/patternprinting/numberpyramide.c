#include<stdio.h>
int main(){
int n ;
printf("Enter a number:");
scanf("%d",&n);
int nsp=n-1;
for (int i=1; i<=n; i++){
    for (int k=1; k<=nsp; k++){
        printf(" ");
    }
    nsp = nsp-1;
    int a = 1;
    for (int j=1; j<=2*i-1; j++){
        printf("%d",a);
        a++;
    }
    printf("\n");
}


    return 0;
}
//very good....