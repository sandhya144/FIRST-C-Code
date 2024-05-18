

#include<stdio.h>
void main(){
    int n,i,sum=0;
    printf("Enter Any Number:");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;

        }
    }
    if(n==sum){
        printf("This is Perfect number");
        }
    else{
        printf("This is not a Perfect Number");
    }
}
