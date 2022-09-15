#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,e=100;
    cin >> n >> k;
    int c[n];
    for(int i=0;i<n;i++)
        cin >> c[i];
    int i=0;
    do
    {
        if(c[i]==0)
            e-=1;
        else if(c[i]==1)
            e-=3;
        i=(i+k)%n;
    }while(i!=0);
    cout << e << endl;
}