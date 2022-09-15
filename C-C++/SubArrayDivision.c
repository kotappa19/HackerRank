#include<stdio.h>
int main()
{
    int i,n,j,sum=0,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int d,m;
    scanf("%d %d",&d,&m);
    for(i=0;i<n;i++)
    {
        int k=i;
        for(j=0;j<m;j++)
            sum+=a[k++];
        if(sum==d)
            count++;
        sum=0;
    }
    printf("%d\n",count);
}