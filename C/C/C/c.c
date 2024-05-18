#include<stdio.h>
void main(){
int r,c;
for(r=1;r<=5;r++){//outer r=5
for(c=5;c>r;c--){//c=5
printf(" ");
}//print space
for(c=1;c<=r;c++){
printf("*"); 
}//print *
printf("\n"); 
}
