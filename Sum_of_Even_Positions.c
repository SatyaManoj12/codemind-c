#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
     {
        sum=sum+x[i];
    }
    }
    printf("%d",sum);
}