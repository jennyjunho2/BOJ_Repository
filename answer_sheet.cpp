#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
// https://www.acmicpc.net/problem/2733
int memory[256];

int main() {fastio
    
    string T; getline(cin, T);
    FOR(i, 1, stoi(T)+1) {
        string ans = "";
        string com = "";
        stack<char> s;
        memset(memory, 0, sizeof(memory));
        int ptr = 0;
        while (true) {
            string S; getline(cin, S);
            if (S == "end") { break;}

            for (char c: S) {
                if (c == '%') { break; }
                com += c;
            }
        }

        int com_size = com.size();
        FOR(j, 0, com_size) {
            char ch = com[j];
            if (ch == '>') {
                ptr = (ptr == 32767 ? 0 : ptr+1);
            }
            else if (ch == '<') {
                ptr = (ptr == 0 ? 32767 : ptr-1);
            }
            else if (ch == '+') {
                memory[ptr] = (memory[ptr] == 255 ? 0 : memory[ptr]+1);
            }
            else if (ch == '-') {
                memory[ptr] = (memory[ptr] == 0 ? 255 : memory[ptr]-1);
            }
            else if (ch == '.') {
                ans += char(memory[ptr]);
            }
            else if (ch == '[') {
                s.push('[');
                if (memory[ptr] == 0) {
                    while(com[j] != ']') {
                        j++;
                    }
                }
            }
            else if (ch == ']') {
                s.pop();
                if (memory[ptr] != 0) {
                    while(com[j] != '[') {
                        j--;
                    }
                }
            }
        }
        cout << "PROGRAM #" << i << ":" << endl;
        if (!s.empty()) {
            cout << "COMPILE ERROR" << endl;
        } else {
            cout << ans << endl;
        }
    }


    return 0;
}