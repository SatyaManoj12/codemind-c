#include<stdio.h>
int main()
{
    int i,n,r,res=0,temp;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        res=(res*10)+r;
        n=n/10;
    }
    printf("%d",res);
}