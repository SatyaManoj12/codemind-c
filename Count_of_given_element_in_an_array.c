#include<stdio.h>
int main()
{
    int i,n,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int key;
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cnt++;
        }
    }
          printf("%d",cnt);
}