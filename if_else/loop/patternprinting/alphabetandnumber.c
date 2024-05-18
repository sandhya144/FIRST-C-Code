#include<stdio.h>
int main (){
int n;
printf("enter no. of rows :");
scanf("%d",&n);
// numerical triangle

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // alphabet triangle 
      for(int i=1;i<=n;i++){
int a=1;
for (int j=1;j<=i;j++){
    int d = a + 64;
    char ch = (char)d;
    printf("%c",ch);
    a++;
}

      } 


    return 0;
}
}
INCOMPLETE CODE.........