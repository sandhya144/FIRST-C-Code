#include<stdio.h>
void main(){
 int A[3]={3,1,2};
 int c;
 // 0,1,2
 int i,j;
 printf("\nbefore sorting\n");
 for(i=0;i<3;i++){
 printf("\t%d",A[i]);
 }
 // 3 1 2----->1 3 2---->1 2 3

 //0 1 2------>0 1 2---->0 1 2
 for(i=0;i<3;i++){//i=3 ---Element--->3
 for(j=i+1;j<3;j++){//j=3----Element ------->2
 if(A[i]>A[j]){
 c=A[i];//c=A[1]--->3
 A[i]=A[j];//A[1]--->2
 A[j]=c;//A[2]=c--->3;
 }
 }
 }
 printf("\nafter sorting\n");
 for(i=0;i<3;i++){
 printf("\t%d",A[i]);
 }
}
