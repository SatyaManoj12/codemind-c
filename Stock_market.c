#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    for(int z=1;z<=i;z++)
    {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("LOSS
");
    else if(a==b)
    printf("NEUTRAL
");
    else 
    printf("PROFIT
");
    }
}