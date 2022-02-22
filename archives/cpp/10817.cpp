#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    sort(begin(arr), end(arr));
    cout << arr[1];

    return 0;
}