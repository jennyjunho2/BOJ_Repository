#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int max_num = 0;
    int N;
    cin >> N;
    int arr[3];
    while (N--) {
        for (int i = 0; i < 3; i++){
            cin >> arr[i];
        }

        if (arr[0] == arr[1] && arr[1] == arr[2]) {
            max_num = max(max_num, 10000 + arr[0] * 1000);
        } else if(arr[0] == arr[1]) {
            max_num = max(max_num, 1000 + arr[1] * 100);
        } else if (arr[1] == arr[2]) {
            max_num = max(max_num, 1000 + arr[1] * 100);
        } else if (arr[0] == arr[2]) {
            max_num = max(max_num, 1000 + arr[0] * 100);
        } else {
            max_num = max(max_num, *max_element(arr, arr + 3) * 100);
        }
    }
    
    cout << max_num;
    
    return 0;
}