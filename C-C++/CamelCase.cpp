#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count=1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]<=90 && s[i]>=65)
            count+=1;
    }
    cout << count;
}