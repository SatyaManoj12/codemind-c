#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    int n,f,l;
    scanf("%d",&n);
    l=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    f=n;
    printf("%d
",f+l);
    }
}