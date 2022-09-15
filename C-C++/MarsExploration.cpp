#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i,j,k,count=0;
    for(i=0,j=i+1,k=j+1;s[i]!='\0';)
    {
        if(s[i]!='S')
            count++;
        if(s[j]!='O')
            count++;
        if(s[k]!='S')
            count++;
        i+=3;
        j=i+1;
        k=j+1;
    }
    cout << count;
}