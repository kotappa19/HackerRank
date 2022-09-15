#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n],res[100],k=0;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            res[k++]=abs(a[i]-a[j]);
        }
    }
    int small=res[0];
    for(int i=1;i<k;i++)
    {
        if(small>res[i])
            small=res[i];
    }
    cout << small;
}