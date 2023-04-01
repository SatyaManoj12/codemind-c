#include<stdio.h>
int main()
{
    int a,b,c,x=0;
    scanf("%d%d%d",&a,&b,&c);
    while(a<b)
    {
        a=a+c;
        x++;
    }
    printf("%d",x);
}