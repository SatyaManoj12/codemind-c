
#include<stdio.h>
int main()
{
	int size,i,sum=0;
	scanf("%d",&size);
	int a[size];
	//reading of array
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
			if(a[i]%2==1)
	{
		sum=sum+a[i];
	}
	}
	printf("%d",sum);

}

