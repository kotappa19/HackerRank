#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,res=0;
    cin >> n;
    long a[n];
    for(long i=0;i<n;i++)
        cin >> a[i];
    for(long i=0;i<n;i++)
    {
        for(long j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                long temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(long i=0;i<n;i++)
    {
        res=res+(pow(2,i)*a[i]);
    }
    cout << res;
}