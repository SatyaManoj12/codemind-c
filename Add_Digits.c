#include<stdio.h>
int main()
{
    int n,s=0,rem,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        s+=rem;
        n=n/10;
        c=c+1;
    }
    if(c==1)
    {
        printf("%d",s);
    }
    else
    {
        while(c>1)
        {
            c=0;
            n=s;
            s=0;
                while(n!=0)
                {
                    
                 rem=n%10;
                s+=rem;
                        n=n/10;
                        c=c+1;
                }
        
        }
        printf("%d",s);
    }
    
}