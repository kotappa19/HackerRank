#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,h=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
                h++;
            else
                h*=2;
        }
        printf("%d\n",h);
    }
}