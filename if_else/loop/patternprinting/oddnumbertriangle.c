#include<stdio.h>
int main (){
int n;
printf("enter no. of rows :");
scanf("%d",&n);
// n =4 -->   1 3 5 7 
for (int i=1;i<=n;i++){
    int a=1;
    for (int j=1;j<=n;j++){
        printf("%d ",a);
        a = a+2;
    }
    printf("\n");
}



  return 0;
}