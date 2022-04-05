#include <bits/stdc++.h>
using namespace std;

int arr[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string S; cin >> S;
    int S_len = S.length();

    memset(arr, -1, sizeof(arr));
    
    for (int i = 0; i < S_len; i++){
        if (arr[(int)S[i] - 'a'] == -1) {
            arr[(int)S[i] - 'a'] = i;
        }
    }
    
    for (int i = 0; i < 26; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}