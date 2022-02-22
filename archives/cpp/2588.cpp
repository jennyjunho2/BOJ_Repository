#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int A, B;
    cin >> A >> B;

    cout << A * (B % 10) << "\n";
    cout << A * (B / 10 - (B/100) * 10) << "\n";
    cout << A * (B / 100) << "\n";
    cout << A * B;
}