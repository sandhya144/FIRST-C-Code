#include <stdio.h>

// void greeting (int n){
// if (n==0) return;  //base case....
// printf ("Good Morning\n");
// greeting(n-1);
// return;
// }

// int main (){
// int n;
// printf("enter a no :");
// scanf ("%d",&n);
// greeting (n);

//  return 0;
// }

// print numbers from n to 1....


void decreasing (int n){
if (n==0) return;  //base case....
printf ("%d\n",n);  //code
decreasing (n-1);   //call
return;
}

int main (){
int n;
printf("enter a no :");
scanf ("%d",&n);
 decreasing (n);

 return 0;
}