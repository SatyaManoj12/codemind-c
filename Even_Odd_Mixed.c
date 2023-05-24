#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    {
        if(n%2==0 && (n/10)%2==0 && (n%100)%2==0)
        {
            printf("Even");
        }
        else if(n%2!=0 && (n/10)%2!=0 && (n%100)%2!=0)
        {
            printf("Odd");
        }
        else
        {
            printf("Mixed");
        }
    }
}