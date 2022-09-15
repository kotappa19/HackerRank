#include<stdio.h>
int main()
{
    int n,i,j,k=0,count=1,res=0;
    scanf("%d",&n);
    int a[n],arrcount[100];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        arrcount[k++]=count;
        count=1;
    }
    for(i=0;i<k;i++)
        if(arrcount[i]%2==0 && arrcount[i]>0)
            res++;
    printf("%d",res);
 }