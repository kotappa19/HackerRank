#include<stdio.h>
int main()
{
    int m,n,i,j,flag=0,k=0,l=0;
    scanf("%d %d",&m,&n);
    int a[m],b[n],res[100],result[100];
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    int x = a[m-1];
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    int y = b[0];
    int sam[1000];
    int s=0;
    for(i=a[m-1];i<=b[0];i++)
    {
        flag = 0;
        for(j=0;j<n;j++)
        {
            if(b[j]%i!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            res[k++]=i;
    }
    for(i=0;i<k;i++)
    {
        flag=0;
        for(j=0;j<m;j++)
        {
            if(res[i]%a[j]!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            result[l++]=i;
    }
    printf("%d\t",l);   
}