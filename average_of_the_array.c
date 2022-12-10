
#include<stdio.h>
int main()
{
	int size,i;
	float sum=0,avg;
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/size;
	printf("%.2f",avg);
}