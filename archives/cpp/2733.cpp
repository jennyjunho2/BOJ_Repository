#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int memory[32768];
string com = "";
map<int, int> match;
int ptr = 0;
stack<int> s;
stack<int> empty_stack;

int bf(int idx) {
    switch (com[idx]) {
        case '>':
            ptr = (ptr == 32767 ? 0 : ptr+1);
            break;
        case '<' :
            ptr = (ptr == 0 ? 32767 : ptr-1);
            break;
        case '+' :
            memory[ptr] = (memory[ptr] == 255 ? 0 : memory[ptr]+1);
            break;
        case '-':
            memory[ptr] = (memory[ptr] == 0 ? 255 : memory[ptr]-1);
            break;
        case '.':
            cout << (char)memory[ptr];
            break;
        case '[':
            return (memory[ptr] == 0 ? match[idx] : idx+1);
        case ']':
            return (memory[ptr] != 0 ? match[idx] : idx+1);
    }

    return idx+1;
}

int main() {fastio
    
    int T; cin >> T;
    cin.ignore();
    FOR(tc, 1, T+1) {
        com.clear();
        match.clear();
        memset(memory, 0, sizeof(memory));
        s = empty_stack;
        ptr = 0;

        while (true) {
            string S; getline(cin, S);
            if (S == "end") { break; }

            S.erase(remove(S.begin(), S.end(), ' '), S.end());
            for (char ch: S) {
                if (ch == '%') { break; }
                com += ch;
            }
        }

        int com_size = com.size();
        FOR(j, 0, com_size) {
            char ch = com[j];
            if (ch == '[') {
                s.push(j);
            } else if (ch == ']') {
                if (s.empty()) {
                    s.push(111); // compile error!
                    break;
                }
                match[s.top()] = j;
                match[j] = s.top();
                s.pop();
            }
        }
        
        cout << "PROGRAM #" << tc << ":" << endl;
        if (s.empty()) {
            for (int j = 0; j < com_size; j = bf(j)) {}
            cout << endl;
        } else {
            cout << "COMPILE ERROR" << endl;
        }
    }

    return 0;
}