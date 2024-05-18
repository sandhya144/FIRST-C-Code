#include<stdio.h>
int main (){
int n;
printf("enter no. of rows :");
scanf("%d",&n);

// for ( int i=1;i<=n;i++){  // no of lines/rows -->i
//     for (int j=1;j<= n+1-i;j++){  //no. of columns -->j
//         printf("* ");
//     }
//     printf("\n");
// }
//OR....
  int a=n;
for ( int i=1;i<=n;i++){  // no of lines/rows -->i
    for (int j=1;j<=a;j++){  //no. of columns -->j
        printf("* ");
    }
    a--;
    printf("\n");
}



    return 0;
}