#include<stdio.h>
int main (){
int n;
printf("enter no. of rows :");
scanf("%d",&n);


for ( int i=1;i<=n;i++){ 
      int a = 1;
    for (int j=1;j<=n;j++){   //no. of columns -->j
    int d = a + 64; // d= 65
    char ch = (char)d;
        printf("%c ",ch);
        a++;
    }
    printf("\n");
}



    return 0;
}