#include<stdio.h>
void fun (int a){
    a=7;
    return;   
}


int main (){
int arr[5] = {1,2,3,4,5};
fun(arr);
 return 0;
}