#include<stdio.h>
int main()
{
    int n,i,cnt1=0,cnt2=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]%2==0)
        cnt1++;
        else
        cnt2++;
    }
    printf("%d %d",cnt1,cnt2);
}