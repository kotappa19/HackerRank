#include<stdio.h>
int main()
{
    int b,n,m,i,j,k=0;
    scanf("%d%d%d",&b,&n,&m);
    int keyboard[n],usb[m];
    for(i=0;i<n;i++)
        scanf("%d",&keyboard[i]);
    for(i=0;i<m;i++)
        scanf("%d",&usb[i]);
    int sum=0,len=m*n;
    int arr[len];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++,k++)
        {
            arr[k]=keyboard[i]+usb[j];
        }
    }
    int big=-1;
    for(i=0;i<k;i++)
        if(arr[i]>big && arr[i]<=b)
            big=arr[i];
    printf("%d",big);
}