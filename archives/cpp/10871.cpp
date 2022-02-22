#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, X;
    cin >> N >> X;
    int temp;

    for (int i = 0; i < N; i++){
        cin >> temp;
        if (temp < X){
            cout << temp << ' ';
        }
    }
    
    return 0;
}