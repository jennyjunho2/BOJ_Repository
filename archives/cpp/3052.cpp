#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<int> table;
    int cnt = 10;
    while (cnt--){
        int num; cin >> num;
        table.insert(num % 42);
    }

    cout << table.size();

    return 0;
}