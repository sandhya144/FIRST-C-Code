#include <stdio.h>
int main(){
 int x=3 , y=5 ;
 if (x==3)
   printf("\n%d",x);
else; 
printf("\n%d",y);  // independent of else condition (;)

//agar if ki statement chal jaye to else ki statement nahi chalti hai 
//par yaha aisa nahi hoga becoz of (;)
    return 0;
}