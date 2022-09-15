#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,k=0;
    cin >> n;
    int a[n],acount[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int size=sizeof(a)/sizeof(a[0]);
    sort(a,a+size);
    for(int i=0;i<n;i++)
    {
        count++;
        for(int j=i+1;j<n;j++)
        {
            if((abs(a[i]-a[j])<=1))
                count++;
        }
        acount[k++]=count;
        count=0;
    }
    int big=acount[0];
    for(int i=1;i<k;i++)
    {
        if(big<acount[i])
            big=acount[i];
    }
    cout << big;
}