#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long S;
    cin >> S;
    for (long long i = sqrt(2*S); i >= 1; i--){
        if (i * i + i <= 2*S){
            cout << i;
            break;
        }
    }

    return 0;
}