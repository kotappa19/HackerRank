#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,q,i,j;
    cin >> n >> k >> q;
    int a[n],queries[q];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<q;i++)
        cin >> queries[i];
    for(i=0;i<k;i++)
    {
        int key=a[n-1];
        for(j=n-1;j>0;j--)
            a[j]=a[j-1];
        a[j]=key;
    }
    for(i=0;i<q;i++)
        cout << a[queries[i]] << endl;
}