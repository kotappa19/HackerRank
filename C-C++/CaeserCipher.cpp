#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    int n;
    int k;
    cin >> n;
    string str;
    cin >> str;
    cin >> k;
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]<=122 && str[i]>=97) || (str[i]<=90 && str[i]>=60))
        {
            int ch=atoi(str[i]);
            char z=i+k;
            cout << str[z];
        }
        else
            cout << str[i];
    }
}