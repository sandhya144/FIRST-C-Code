#include<stdio.h>
int main (){
 int i = 1;
  while(i<10){  // condition fails here
printf("Hello\n");
i++;  // nothing will be going to print.
 }

// do{
// printf("Hello \n"); //ek bar print karana hi ho to ....
// i++;
// } while (i<10);

 return 0;
  }