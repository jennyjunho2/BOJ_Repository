#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string S;
    int arr[26];
    cin >> S;
    int S_len = S.length();

    for (int i = 0; i < 26; i++){
        arr[i] = -1;
    }
    
    for (int i = 0; i < S_len; i++){
        if (arr[(int)S[i] - 97] == -1) {
            arr[(int)S[i] - 97] = i;
        }
    }
    
    for (int i = 0; i < 26; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}