#include<stdio.h>
int main (){
int cp; //box
printf("Enter cost price: ");
scanf("%d",&cp);
int sp;
printf("Enter selling price:");
scanf("%d",&sp);
if(sp>cp){   //it will only show the codition which satisfy sp>cp
printf("profit");
}

//else{  //it will show that condition in which sp less than equal to cp
   // printf("loss");
//}

if (cp>sp){
    printf("loss");
}
if (sp==cp){
    printf("no profit no loss");
}



return 0;   
}