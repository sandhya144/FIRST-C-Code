#include <stdio.h>
int main (){
int a,b,c ;
printf("enter 1st number:");
scanf("%d",&a);
printf("enter 2nd number:");
scanf("%d",&b);
printf("enter 3rd number:");
scanf("%d",&c);
if (a>b){ // b is out of race
 if (a>c)
  printf("%d is the greatest",a);
 else // (a<c)ye bhi likh sakate hai --> b < a < c
   printf("%d is the greatest",c);
}
else{  // b>a  --> a ab sabse bada to nahi hai a is out of race
   if (b>c)
     printf("%d is the greatest",b);
    else // (c>b) opposite
    printf("%d is the greatest",c);
}


    return 0;
}