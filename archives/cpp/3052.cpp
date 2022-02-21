#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 10;
    set<int> table;
    int num;
    while (cnt--){
        cin >> num;
        table.insert(num % 42);
    }

    cout << table.size();

    return 0;
}