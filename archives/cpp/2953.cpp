#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 1;
    int result, max = 0;
    int temp;
    FOR(i, 0, 5){
        int sum = 0;
        FOR(j, 0, 4){
            cin >> temp;
            sum += temp;
        }
        
        if (sum > max){
            result = cnt;
            max = sum;
        }
        cnt++;
    }

    cout << result << ' ' << max;

    return 0;
}