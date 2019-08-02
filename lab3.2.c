#include<stdio.h>
struct student
{
char name[30];
int roll;
char branch[10];
float cgpa;
};
int main()
{
struct student s;
struct student *st;
st=&s;
printf("enter the details of student\n Name:");
scanf("%s",&st->name);
printf("Roll number:");
scanf("%d",&st->roll);
printf("Branch:");
scanf("%s",&st->branch);
printf("CGPA:");
scanf("%f",&st->cgpa);
printf("\n\n\nThe student details are:\n name:%s\n Roll no:%d\n branch:%s\ncgpa:%f",st->name,st->roll,st->branch,st->cgpa);
return 0;
}
