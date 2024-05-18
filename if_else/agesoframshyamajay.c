#include <stdio.h>
int main()
int a,b,c ;
printf("Enter the age of ram : ");
scanf("%d",&a);
printf("Enter the age of shyam : ");
scanf ("%d",&b);
printf("Enter the age of ajay :" );
scanf("%d",&c);
if (a<b){ // b is out of race
 if (a<c)
  printf("%d is the smallest",a);
 else // (a<c)ye bhi likh sakate hai --> b < a < c
   printf("%d is the smallest",c);
}
else{  // b>a  --> a ab sabse bada to nahi hai a is out of race
   if (b<c)
     printf("%d is the smallest",b);
    else // (c>b) opposite
    printf("%d is the smallest",c);



    return 0;
}