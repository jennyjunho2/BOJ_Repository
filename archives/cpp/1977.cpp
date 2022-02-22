#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int M, N;
    cin >> M;
    cin >> N;
    int sum = 0;
    int ans = -1;

    for (int i = M; i <= N; i++){
        if (floor(sqrt(i)) == sqrt(i)) {
            if (ans == -1) {
                ans = i;
            }
            
            sum += i;
        }

        
    }

    if (sum == 0) { cout << -1;}
    else {
        cout << sum << "\n";
        cout << ans;
    }

    return 0;
}