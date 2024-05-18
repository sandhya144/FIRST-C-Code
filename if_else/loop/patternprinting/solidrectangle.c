#include<stdio.h>
int main(){
int n;
printf("Enter a number of rows:");
scanf("%d",&n);
int m;
printf("Enter a number of columns:");
scanf("%d",&m);
// ********....... up to n numbers of stars
  for (int i=1;i<=n;i++){  //outer loop -->no of rows -->no of lines
   for(int i=1;i<=m;i++){  // inner loop --> no. of columns --> no of stars in each line
    printf("* ");
   }
    printf("\n");  // line ke bad enter ke liye
  }

    return 0;
}