#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; char K; cin >> N >> K;
    string word;
    int cnt = 0;
    
    FOR(hr, 0, N+1){
        FOR(min, 0, 60){
            FOR(sec, 0, 60){
                if (hr / 10 == 0) {
                    word += '0';
                }
                word += to_string(hr);
                if (min / 10 == 0) {
                    word += '0';
                }
                word += to_string(min);
                if (sec / 10 == 0) {
                    word += '0';
                }
                word += to_string(sec);

                if (word.find(K) != -1) {
                    cnt++;
                }
                word.clear();
            }
        }
    }

    cout << cnt;
    
    return 0;
}