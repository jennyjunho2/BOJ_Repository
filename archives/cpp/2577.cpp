#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C, temp;
    cin >> A >> B >> C;
    int result = A * B * C;
    int table[10] = {0, };

    while (result > 0){
        temp = result % 10;
        table[temp]++;
        result /= 10;
    }

    for (int i = 0; i < 10; i++){
        cout << table[i] << "\n";
    }
    return 0;
}