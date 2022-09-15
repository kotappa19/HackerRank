#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin >> n;
    string pass;
    cin >> pass;
    if(n<6)
    {
        cout << (6-n);
        exit(0);
    }
    for(int i=0;i<n;i++)
    {
        if(!(pass[i]<=90 && pass[i]>=65))
        {
            count++;
            break;
        }
        if(!(pass[i]<=122 && pass[i]>=97))
        {
            count++;
            break;
        }
        if(!(pass[i]<=57 && pass[i]>=48))
        {
            count++;
            break;
        }
        if(!(pass[i]=='!' || pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' || pass[i]=='^' || pass[i]=='&' || pass[i]=='*' || pass[i]=='(' || pass[i]==')' || pass[i]== '-' || pass[i]=='+'))
        {
            count++;
            break;
        }
    }
    cout << count;
        
}