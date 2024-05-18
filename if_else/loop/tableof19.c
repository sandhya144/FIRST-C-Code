#include<stdio.h>
int main(){

   for (int i=19; i<=190; i=i+19){
    printf("%d ",i);
   }

 //print the table of n(integer). 

 int n;
printf("Enter a number:");
scanf("%d ",&n); 

for (int i = 1; i <= 10; ++i) {
        
        printf("%d x %d = %d\n", n , n * i);
} 
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n;

//     // Get the value of n from the user
//     printf("Enter an integer: ");
//     scanf("%d", &n);

//     // Print the table of n from 1 to 10 (you can change the limit as needed)
//     printf("Table of %d:\n", n);
//     for (int i = 1; i <= 10; ++i) {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }

//     return 0;
// }
// }