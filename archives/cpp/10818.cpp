#include <bits/stdc++.h>
using namespace std;

int arr[1000000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    cout << *min_element(arr, arr+N) << ' ' << *max_element(arr, arr+N);

    return 0;
}