#include<stdio.h>
#include<stdlib.h>
struct Num{
	char choice;
	int n1;
	int n2;
	
}x;
void intro();
void showinfo();
void input();
void output();
void add();
void sub();
void mul();
void div1();


void intro()
{
	printf("\t\t\t\tWelcome To My Calculator\t\t\t\n");
	
}

 showinfo()
{   printf("\n================\n");
	printf("\nEnter Your Choice : \n");
	printf("\n Press + for Addition:\n");
	printf("\n Press - for Subtraction:\n");
	printf("\n Press * for Multiplication:\n");
	printf("\n Press / for Division: ");

	printf("\n==================\n");
	fflush(stdin);
	
	scanf("%c",&x.choice);
	
printf("\n==========================\n");

}

void input()
{
	printf("Enter Number 1:");
	scanf("%d",&x.n1);
	printf("Enter Number 2:");
	scanf("%d",&x.n2);
	
}

void output()
{
	printf("\n Number 1 is %d",x.n1);
	printf("\n Number 2 is %d",x.n2);
}

void add()
{
	printf("\n Addition %d\n",x.n1+x.n2);
}

void sub()
{
	printf("\n Subtraction %d\n",x.n1-x.n2);
}

void mul()
{
	printf("\n Multiplication %d\n",x.n1*x.n2);
	
}


void div1()
{
	printf("\n Division %d\n",x.n1/x.n2);
}


void main()
{
	char uname[20];
	char pass[20];
	printf("Enter user Name: ");
	scanf("%s",&uname);
	printf("Enter Password: ");
	scanf("%s",&pass);
	
	if((strcmp(uname,"codeaj")==0)&&(strcmp(pass,"123456")==0))
	{
		printf("\nLogin Success\n");
		intro();
		
		
		do
		{
			showinfo();
			input();
			switch(x.choice)
			{
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
			
		}
		while(x.choice!='+' || x.choice!='-' || x.choice!='*' || x.choice!='/');
	}
	
	else{
		printf("\nYou Entered Inavlid Username or password");
	}
	
	}
