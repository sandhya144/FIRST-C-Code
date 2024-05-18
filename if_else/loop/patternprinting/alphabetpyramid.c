#include<stdio.h>
int main(){
int n ;
printf("Enter a number:");
scanf("%d",&n);
int nsp=n-1;
for (int i=1; i<=n; i++){
    for (int q=1; q<=nsp; q++){ // spaces...
        printf(" ");
    }
    nsp = nsp-1;
    
    for (int j=1; j<=i; j++){ // no. of triangles.....
    char ch = (char)(j+64);
        printf("%c",ch);
    }
    int a=i-1;
for (int k=1;k<=i-1;k++){  // extra things......
    char ch = (char)(a+64);
    printf("%c",ch);
    a--;
}
    printf("\n");
}
    return 0;
}