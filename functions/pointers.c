#include<stdio.h>
int main(){
int a = 5;
int* x = &a;
// printf("%p",&a); // %p se address print hota hai....
// printf("%d\n",*x);  //5
//*x = 7;  // a is changed.....
int** y = &x;  //int** --> int* ka address store karta hai....
printf("%p\n",x); 
printf("%p\n",y);

  return 0;  
}