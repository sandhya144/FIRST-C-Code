#include<stdio.h>
#include<stdlib.h>
struct Student{
	char Name[20];
	char BankName[30];
	int  AccNum;
	int  Sal;

}s;
void main(){
	struct Student;
	int i;
	for (i=0;i<2;i++)
	{
		printf("%d Student Details\n",i+1);
		printf("Enter student name::");
		scanf("%s",&s.Name);
		printf("Enter BankName::");
		scanf("%s",&s.BankName);
		printf("Enter Account Number::");
		scanf("%d",&s.AccNum);
		printf("Enter Salary::");
		scanf("%d",&s.Sal);

	}
	for (i=0;i<2;i++)
	{
		printf("\n%d Student Details",i+1);
		printf("\nStudent Name::%s",s.Name);
		printf("\nBank Name::%s",s.BankName);
		printf("\nAccount Number::%d",s.AccNum);
		printf("\nSalary::%d",s.Sal);
	}
}
