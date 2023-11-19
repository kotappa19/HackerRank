#include <bits/stdc++.h>

using namespace std;



string gameOfThrones(string s) {
    sort(s.begin(), s.end());
    for(int i = 0; i < s.size();) {
        if(s[i] == s[i+1]) {
            s.erase(i, 2);
        } else {
            i += 1;
        }
    }
    if(s.size() <= 1) {
        return "YES";
    } else {
        return "NO";
    }
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
