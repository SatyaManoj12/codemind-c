#include<stdio.h>
int main()
{
    int h;
    scanf("%d",&h);
    while(h--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("%d
",n/2);
        }
        else
        {
            printf("%d
",(n+1)/2);
        }
    }
}