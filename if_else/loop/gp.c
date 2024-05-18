#include<stdio.h>
int main(){
 int n;    
 printf("Enter a number: ");
 scanf("%d",&n);
//1 2 4 8 16 32...... Print this GP
// int a = 1;
// for(int i=1; i<=n; i++){
//      printf("%d ",a);
//      a = a*2;
// }

int a = 3;
for(int i=1; i<=n; i++){
     printf("%d ",a);
     a = a*4;
}

 return 0;
}

