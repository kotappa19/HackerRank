#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

        int a,b,count=0;
        cin >> a >> b;

        for(int i=1;i<=b;i++){

            if((i*i)>=a && (i*i)<=b)
                count++;
            if((i*i)>b)
                break;
        }
        cout << count << endl;

    }
}
