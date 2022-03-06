#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

void print_arr(int arr[]) {
    FOR(i, 0, 5) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    int sorted[5] = {1, 2, 3, 4, 5};

    while (true) {
        FOR(i, 0, 4) {
            if (arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
                print_arr(arr);
            }
        }

        if (equal(begin(arr), end(arr), begin(sorted))) {
            break;
        }
    }

    return 0;
}