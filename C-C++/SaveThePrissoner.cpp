#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,s;
        cin >> n >> m >> s;
        m=m%n;
        for(int i=0;i<m;i++)
        {
            s++;
        }
        cout << s-1 << endl;
    }
}