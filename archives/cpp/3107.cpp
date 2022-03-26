#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int cnt = 0;
vector<string> split(string str, char delimiter) {
    istringstream iss(str);
    string buffer;
    vector<string> result;

    while (getline(iss, buffer, delimiter)) {
        int buf_len = buffer.size();
        if (buf_len) {
            cnt++;
            while (buf_len < 4) {
                buffer = "0" + buffer;
                buf_len++;
            }
        } else {
            buffer = "-1";
        }

        result.push_back(buffer);
    }

    return result;
}

int main() { fastio

    string S; cin >> S;
    vector<string> ip = split(S, ':');
    vector<string> ans;
    int ip_size = ip.size();
    bool should_add = false;
    FOR(i, 0, ip_size) {
        string temp = ip[i];
        if (temp == "-1") {
            if (!should_add) {
                int tmp = 8-cnt;
                while (tmp--) {
                    ans.push_back("0000");
                }
                should_add = true;
            }
        } else {
            ans.push_back(temp);
        }
    }

    FOR(i, 0, 8) {
        cout << ans[i];
        if (i < 7) { cout << ':';}
    }

    return 0;
}