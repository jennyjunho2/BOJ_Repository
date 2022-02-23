#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int temp;
    int sum = 0;
    FOR(i, 0, 5){
        cin >> temp;
        sum += temp;
    }

    cout << sum;

    return 0;
}