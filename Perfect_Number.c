#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    if(n==s)
    printf("True");
    else
    printf("False");
}