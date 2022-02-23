#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    int temp;
    int sum = 0;
    while (N--){
        cin >> temp;
        sum += temp - 1;
    }

    cout << sum + 1;

    return 0;
}