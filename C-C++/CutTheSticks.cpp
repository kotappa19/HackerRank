#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,i,small;
    cin >> n;

    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];

    int len=i;

    while(len>0){

        for(int j=0;j<n;j++){

            if(a[j]>0){
                
                small=a[j];
                break;
            }
        }

        for(int j=1;j<n;j++){

            if(small==0)
                small=a[j];

            if(a[j]>0 && a[j]<small)
                small=a[j];
        }

        for(int j=0;j<n;j++)
            a[j]-=small;

        cout << len << endl;

        for(int j=0;j<n;j++){

            if(a[j]==0)
                len--;
        }

        
    }    
    return 0;
}