#include<stdio.h>
 #include<stdlib.h>
int main()
{
int *p;
int n;
int i;
int max;
int min;
printf("Enter the no of integers to be entered:\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
if(p == NULL)
{
printf("Out of memory\n");
exit(1);
}
printf("Enter integers:\n");
for(i=0;i<n;i++)
scanf("%d",p+i);

max=min=*p;
for(i=0;i<n;i++)
{
if(*(p+i)>max)
{
max=*(p+i);
}
if(*(p+i)<min)
{
min=*(p+i);
}
}
printf("largest element of the array is %d ",max);
printf("the smallest element of the array is %d",min);
return 0;
}
