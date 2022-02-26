#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int factorial(int num){
    if (num == 1 or num == 0) { return 1; }
    
    return num * factorial(num - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K; cin >> N >> K;
    cout << factorial(N) / factorial(K) / factorial(N-K);

    return 0;
}