#include<stdio.h>
int main()
{
    int n,x=0,y=0;
    scanf("%d",&n);
    int G[n],K[n];
    for(int i=0;i<n;i++)
        scanf("%d",&G[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&K[i]);
    for(int i=0;i<n;i++)
    {
        if(G[i]>K[i])
            y++;
        else if(G[i]<K[i])
            x++;
    }
    printf("%d %d",x,y);

}