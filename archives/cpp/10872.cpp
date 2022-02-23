#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int factorial(int num){
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;

    cout << factorial(N);

    return 0;
}