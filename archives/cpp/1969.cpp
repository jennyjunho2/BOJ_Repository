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
int N, M;
vector<string> vec_DNA;
string word;
int ans;
string ans_word;

int main() { fastio
    
    cin >> N >> M;
    FOR(i, 0, N) {
        string temp; cin >> temp;
        vec_DNA.push_back(temp);
    }

    FOR(i, 0, M) {
        int a = 0, t = 0, g = 0, c = 0;
        FOR(j, 0, N) {
            switch(vec_DNA[j][i]) {
                case 'A': a++; break;
                case 'C': c++; break;
                case 'T': t++; break;
                case 'G': g++; break;
            }
        }

        int max_cnt = max({a, t, g, c});
        char max_char;
        if (max_cnt == a) {
            max_char = 'A';
            ans_word += 'A';
        } else if (max_cnt == c) {
            max_char = 'C';
            ans_word += 'C';
        } else if (max_cnt == g) {
            max_char = 'G';
            ans_word += 'G';
        } else if (max_cnt == t) {
            max_char = 'T';
            ans_word += 'T';
        }

        int temp_cnt = 0;
        FOR(j, 0, N) {
            if (vec_DNA[j][i] != max_char) {
                temp_cnt++;
            }
        }
        ans += temp_cnt;
    }

    cout << ans_word << endl << ans;
    
    return 0;
}