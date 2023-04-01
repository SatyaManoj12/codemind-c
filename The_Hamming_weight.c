#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    int i,m,cnt=0;
     scanf("%s",&n);
    m=strlen(n);
    for(i=0;i<=m;i++)
    {
        if(n[i]=='1')
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}