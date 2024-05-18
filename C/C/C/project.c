// Calculator Project

#include<stdio.h>
#include<stdlib.h>
struct Num{
char choice;
int n1;
int n2;
}x;
void intro();
void showInfo();
void input();
void output();
void add();
void sub();
void mul();
void intro(){
printf("\t\t\t\tWelcome To My Calculator 
Project\t\t\n");
}
void showInfo(){
printf("\n===========================\n");
printf("\nEnter Your Choice : \n");
printf("\n Press + For Addition : ");
printf("\n Press - For Subtracttion : ");
printf("\n Press * For Multiplication : ");
printf("\n Press / For Division : ");
printf("\n===============================
\n");
fflush(stdin);
scanf("%c",&x.choice);
printf("\n===============================
\n");
}
void input(){
printf("Enter Number 1: ");
scanf("%d",&x.n1);
printf("Enter Number 2: ");
scanf("%d",&x.n2);
}
void output(){
printf("\n Number 1 is %d ",x.n1);
printf("\n Number 2 is %d ",x.n2);
}
void add(){
printf("\n Addition %d \n ",x.n1+x.n2);
}
void sub(){
printf("\n Subtraction %d \n ",x.n1-x.n2);
}
void mul(){
printf("\n Multiplication %d \n ",x.n1*x.n2);
}
void div1(){
printf("\n Division %d \n ",x.n1/x.n2);
}
void main(){
char uname[20];
char pass[20];
printf("Enter User Name : ");
scanf("%s",&uname);
printf("Enter Password : ");
scanf("%s",&pass);
if((strcmp(uname,"ram")==0)&&(strcmp(pass,"
123")==0)){
printf("\nLogin Success\n");
intro();

do{
showInfo();
input();
switch(x.choice){
case '+':
add();
break;
case '-':
sub();
break;
case '*':
mul();
break;
case '/':
div1();
break;
case '1':
exit(0);
default:
printf("\nInvalid choice\n");
}
}while(x.choice!='+'||x.choice!='-
'||x.choice=='*'||x.choice=='/');
}
else{
printf("\nYou Entered Invalid Username 
or password\n");
}
}

