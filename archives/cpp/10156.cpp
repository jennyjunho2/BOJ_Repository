#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int K, N, M;
    cin >> K >> N >> M;

    cout <<  max(K * N - M, 0);

    return 0;
}