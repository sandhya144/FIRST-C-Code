//given three points (x1,y1),(x2,y2) and(x3,y3), write a program to 
//check if allthe three points fall on one staright line.


#include <stdio.h>
int main(){
int x1,y1,x2,y2,x3,y3;

printf("Enter x1");
scanf("%d",&x1);
printf("Enter y1");
scanf("%d",&y1);
printf("Enter x2");
scanf("%d",&x2);
printf("Enter y2");
scanf("%d",&y2);
printf("Enter x3");
scanf("%d",&x3);
printf("Enter y3");
scanf("%d",&y3);

int m1 = (y2-y1)/(x2-x1);
int m2 = (y3-y2)/(x3-x2);
 if (m1==m2){
    printf("ALL THE POINTS ARE ON STARIGHT LINE\n");
 }
 else{
    printf("ALL THE POINTS ARE NOT ON STRAIGHT LINE\n");
 }
 return 0;
}