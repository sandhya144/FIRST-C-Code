#include<stdio.h>
int main(){
int n;
printf("enter no. of lines: ");
scanf("%d",&n);
int nsp = n-1;

// for (int i=1;i<=n;i++){
//     for (int j=1;j<=2*i-1;j++){
//         printf("*");
//     }
  int nst = 1;
for (int i=1;i<=n;i++){
    for (int k =1 ; k<= nsp; k++){
        printf (" ");
    }
    nsp = nsp -1;

    for (int j=1;j<=2*i-1;j++){
        printf("*");
    }
    nst = nst + 2;
     printf("\n");
}

    return 0;
}
// GOOOOOODDDD ......