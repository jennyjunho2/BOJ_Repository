#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    int one = 0, zero = 0;
    int temp;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        if (temp == 0) { zero++; }
        else { one++; }
    }

    cout << (one < zero ? "Junhee is not cute!" : "Junhee is cute!");

    return 0;
}