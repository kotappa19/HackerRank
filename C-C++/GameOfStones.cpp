#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n%2==0 || n%5==0 || n%3==0 )
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
}