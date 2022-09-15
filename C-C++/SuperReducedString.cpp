#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l=s.length();
    int i,j,k,flag=0;
    for(i=0;i<l;i++)
    {
        for(j=0,k=j+1;s[j]!='\0';)
        {
            if(s[j]==s[k])
            {
                s[j]='\0';
                s[k]='\0';
                j+=2;
                k=j+1;
                l-=2;
            }
            else if(j==s.length()-1)
            {
                k=0;
            }
            else
            {
                j+=1;
                k=j+1;
            }

        }
    }
    for(int g=0;g<s.length();g++)
    {
        if(s[g]!='\0')
        {
            cout << s[g];
            flag=1;
        }
    }
    if(flag==0)
        cout << "Empty String";
}