#include<stdio.h>
int maze (int cr,int cc, int er, int ec){
int rightways=0;
int downways=0;
if (cr==er && cc==ec) return 1;
if (cr==er){  // only rightways call
rightways += maze (cr,cc+1,er,ec);
}
if (cc==ec){  // only downward call
downways += maze (cr+1,cc,er,ec);
}
if(cr<er && cc<ec){
    rightways += maze(cr,cc+1,er,ec);
    downways += maze (cr+1,cc,er,ec);
}
 int total ways = rightways + downways;
 return totalways;   
}


int main (){
int n; // no.of rows
printf("enter number of rows of the maze :");
scanf("%d",&n);
int m; // no. of columns
printf("enter number of columns of the maze : ");
scanf("%d",&m);
int no.ofways = maze (1,1,n,m);
printf("%d",no.ofways);
    return 0;
}