// wap to print the sum of the series......

#include<stdio.h>
int main (){
int n;
printf("enter a number:");
scanf("%d",&n);
 // 1-2+3-4+5-6+.......n terms
// odd numbers add
// even numbers subtract

int sum = 0;
if(n%2==0){
    sum = -n/2;
}
else{
    sum = -n/2 +n;
}
// OR.....   for (int i=1;i<=n;i++){
  //sum = sum +i;  // 1+2+3+4+5....n terms


//   if (i%2!=0) sum = sum + i;
//   if (i%2==0) sum = sum - i;
//}

printf ("the sum is : %d", sum);
return 0;
}
