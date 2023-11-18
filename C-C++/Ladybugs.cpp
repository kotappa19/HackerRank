#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



string happyLadybugs(string b) {
    int under_score_cnt = 0;
    for(int i = 0; i < b.size(); i++) {
        if(b[i] == '_') {
            under_score_cnt += 1;
        }
    }
    if(under_score_cnt > 0) {
        sort(b.begin(), b.end());
    }
    bool flag = true;
    for(int i = 0; i < b.size(); i++) {
        if(b[i] != '_') {
            flag = false;
            break;
        }
    }
    if(flag) {
        return "YES";
    }
    flag = true;
    for(int i = 0; i < b.size(); i++) {
        if(b[i] != '_') {
            if(i == 0) {
                if(b[i] != b[i+1]) {
                    flag = false;
                    break;
                }
            } else if(i == b.size()-1) {
                if(b[i] != b[i-1]) {
                    flag = false;
                    break;
                }
            } else {
                if(b[i] != b[i+1] && b[i] != b[i-1]) {
                    flag = false;
                    break;
                }
            }
        }
    }
    if(flag) {
        return "YES";
    } else {
        return "NO";
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string g_temp;
    getline(cin, g_temp);

    int g = stoi(ltrim(rtrim(g_temp)));

    for (int g_itr = 0; g_itr < g; g_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
