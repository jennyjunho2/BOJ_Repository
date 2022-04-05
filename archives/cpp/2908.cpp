#include <bits/stdc++.h>
using namespace std;

int reversed(int& num){
    int result = 0;
    while (num > 0) {
        result = result * 10 + num % 10;
        num /= 10;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B;
    cin >> A >> B;
    cout << max(reversed(A), reversed(B));

    return 0;
}