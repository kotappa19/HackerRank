#include<stdio.h>
int main()
{
    int n,k,i,res=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int b;
    scanf("%d",&b);
    for(i=0;i<n;i++)
       res+=a[i];
    res=(res-a[k])/2;
    if(res==b)
        printf("Bon Appetit");
    else if(res<b)
        printf("%d",(b-res));
}