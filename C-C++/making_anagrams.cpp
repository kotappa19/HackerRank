#include <bits/stdc++.h>

using namespace std;

int makingAnagrams(string s1, string s2) {
    int freq1[26];
    for(int i = 0; i < 26; i++) {
        freq1[i] = 0;
    }
    for(int i = 0; i < s1.size(); i++) {
        freq1[s1[i]-'a']++;
    }
    int freq2[26];
    for(int i = 0; i < 26; i++) {
        freq2[i] = 0;
    }
    for(int i = 0; i < s2.size(); i++) {
        freq2[s2[i]-'a']++;
    }
    int ans = 0;
    for(int i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            ans += abs(freq1[i] - freq2[i]);
        }
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
