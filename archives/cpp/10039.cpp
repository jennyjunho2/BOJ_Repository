#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int temp;
    int result = 0;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        result += max(temp, 40);
    }

    cout << result / 5;

    return 0;
}