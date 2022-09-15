#include<bits/stdc++.h>

using namespace std;

int main(){

    string str;
    long n;

    cin >> str;
    cin >> n;

    if(str=="a"){

        cout << n;
        exit(0);
    }

    long i,count=0;
    for(i=0;str[i]!='\0';i++){

        if(str[i]=='a')
            count++;
    }

    long len=i;
    if(len>n){

        cout << len;
        exit(0);
    }

    long res=(10*count)/len;
    if((n*count)%len == 0)
        cout << res;
    else
        cout << res+1;

    return 0;
}