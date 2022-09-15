#include<stdio.h>
int main()
{
    int n,p,count=0;
    scanf("%d %d",&n,&p);
    int i=0,j=n;
    while(i<j)
    {
        if(i==p || j==p || i-1==p || j+1==p)
            break;
        count++;
        i+=2;
        j-=2;
    }
    printf("%d",count);
}