#include<stdio.h>
int main()
{
    int i,n,r,rev=0,re=0;
    scanf("%d",&n);
    int sq=n*n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    int sqq=rev*rev;
    int x=sqq;
    while(x!=0)
    {
        r=x%10;
        re=re*10+r;
        x=x/10;
    }
    if(sq==re)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}