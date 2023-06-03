#include<stdio.h>
int main()
{
    int n1=0,n2=1,nextterm=1,n;
    scanf("%d",&n);
    while(nextterm<n)
    {
        nextterm=n1+n2;
        n1=n2;
        n2=nextterm;
    }
    if(n==1||nextterm==n||n==0)
    	printf("True");
    else
    printf("False");
    
}