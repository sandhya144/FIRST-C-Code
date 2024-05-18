#include<stdio.h>
int main(){
int n;
printf("enter a number: ");
scanf("%d ",n) ;
// 100 97 94 ........

// int a = 100;
// for(int i=1; i<=n; i++){
//      printf("%d ",a);
//      a = a-3 ;
// }

// int a = 100;
// for(int i=1; a>0; i++){
//      printf("%d ",a);
//      a = a-3 ;
// }


//  return 0;
// }

float a=100;
for (int i=1;i<=n;i++){
    printf("%f ",a);
    a=a*(1/2) ;

}

return 0;
}
