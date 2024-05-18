//given a points (x,y), write a program to find out if it lies on the x axis,yaxis or at the origin,viz (0,0).

#include<stdio.h>
int main(){
int x,y;
printf("Enter the coordinates: ");
scanf("%d %d",&x, &y); //first we check these pts lies on origin or not.

// printf(" enter x ");
// scanf("%d", &x);
// printf(" enter y ");
// scanf("%d", &y);

if (x==0 && y==0){ 
    printf("The point is origin");
}
else if (x==0){
    printf("lies on y axis ");
}
else if(y==0){
    printf("lies on x axis ");
}
else{
    printf("the point does not lie on x or y axis");
}
    return 0;
}