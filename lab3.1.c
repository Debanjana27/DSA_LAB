#include<stdio.h>
#include<string.h>
struct student
{
char name[30];
int roll;
char branch[20];
float cgpa;
};
int main()
{
struct student s;
printf("enter the dtails of the student:\n Name:");
scanf("%s",s.name);
printf("\nRoll number:");
scanf("%d",&s.roll);
printf("\n Branch:");
scanf("%s",&s.branch);
printf("CGPA:");
scanf("%f",&s.cgpa);
printf("\n \n\n the student details are\n Name:%s\n Roll no:%d\nBranch:%s\nCGPA:%f",s.name,s.roll,s.branch,s.cgpa);
return 0;
}

