#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x,r=0,rem;
        scanf("%d",&x);
        int temp=x;
        while(x!=0)
        {
            rem=x%10;
            x=x/10;
            r=r*10+rem;
        }
        if(temp==r)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}