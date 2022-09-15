#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string path;
    cin >> path;
    int count=0,valley=0;
    for(int i=0;i<path.length();i++)
    {
        if(path[i]=='U')
            count++;
        else if(path[i]=='D')
            count--;
        if(count==-1 && path[i+1]=='U')
            valley++;
    }
    cout << valley;
}