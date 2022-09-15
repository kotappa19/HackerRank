#include<bits/stdc++.h>
using namespace std;
int main()
{
    string alpha="abcdefghijklmnopqrstuvwxyz";
    int h[26],res[26],k=0;
    for(int i=0;i<26;i++)
        cin >> h[i];
    string word;
    cin >> word;
    for(int i=0;i<word.length();i++)
    {
        for(int j=0;j<26;j++)
        {
            if(word[i]==alpha[j])
            {
                res[k++]=h[j];
                break;
            }
        }
    }
    int big=res[0];
    for(int i=1;i<k;i++)
    {
        if(big<res[i])
            big=res[i];
    }
    cout << big*(k);
}