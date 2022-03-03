#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int max_sum = 0;
    int arr[4]; 
    int N; cin >> N;
    while (N--) {
        int dice[7];
        memset(dice, 0, sizeof(dice));
        int sum = 0;

        FOR(i, 0, 4){
            cin >> arr[i];
            dice[arr[i]]++;
        }

        FOR(i, 1, 7) {
            if (dice[i] == 4) {
                sum = 50000 + 5000 * i;
                break;
            }
        }

        if (!sum) {
            FOR(i, 1, 7) {
                if (dice[i] == 3) {
                    sum = 10000 + 1000 * i;
                    break;
                }
            }
        }

        if (!sum) {
            int cnt = 0;
            FOR(i, 1, 7) {
                if (dice[i] == 2) {
                    cnt++;
                    sum += i;
                }
            }

            if (cnt == 2) {
                sum = 2000 + 500 * sum;
            } else if (cnt == 1) {
                sum = 1000 + 100 * sum;
            }
            
        }

        if (!sum) {
            for (int i = 6; i > 0; i--){
                if (dice[i] != 0) {
                    sum = 100 * i;
                    break;
                }
            }
        }

        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
    
    return 0;
}