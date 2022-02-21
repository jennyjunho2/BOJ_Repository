#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int temp;
    int sum = 0;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        sum += pow(temp, 2);
    }

    cout << sum % 10;

    return 0;
}