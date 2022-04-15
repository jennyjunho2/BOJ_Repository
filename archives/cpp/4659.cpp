#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
string S;

bool is_vowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

bool check1(string str) {
    return any_of(str.begin(), str.end(), [](char ch) {
        return is_vowel(ch);
    });
}

bool check2(string str) {
    int str_len = str.size();
    FOR(i, 0, str_len-2) {
        char a = str[i];
        char b = str[i+1];
        char c = str[i+2];
        if ((is_vowel(a)&&is_vowel(b)&&is_vowel(c)) || (!is_vowel(a) && !is_vowel(b) && !is_vowel(c))) {
            return false;
        }
    }
    return true;
}

bool check3(string str) {
    int str_len = str.size();
    FOR(i, 0, str_len-1) {
        if (str[i] == str[i+1] && str[i] != 'e' && str[i] != 'o') {
            return false;
        }
    }
    return true;
}

int main() { fastio

    while (cin >> S) {
        if (S == "end") { break; }
        cout << '<' << S << '>' << " is ";
        if (check1(S) && check2(S) && check3(S)) {
            cout << "acceptable." << endl;
        } else {
            cout << "not acceptable." << endl;
        }
    }

    return 0;
}