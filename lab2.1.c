#include<stdio.h>
int main()
{int n, arr[n],j,*max,*min,i;                                                                                 ;
printf("Enter the number of elements of the array:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}

max=min=arr;
for(j=0;j<n;j++)
{
if(*(arr+j)>*max)
{
max=(arr+j);
}
if(*(arr+j)<*min)
{
min=(arr+j);
}
}
printf("\n");
printf("The largest element of the array is:%d",*max);
printf("The smallest element of the array is:%d",*min);
return 0;
}
