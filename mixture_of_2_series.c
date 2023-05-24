#include<stdio.h>
int main()
{
    int i,n,k1=0,k2=0,a,b;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2==0)
        {
            a=k1;
            printf("%d ",a);
            k1++;
        }
        else
        {
            b=2*k2;
            printf("%d ",b);
            k2++;
        }
    }
}