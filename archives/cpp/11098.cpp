#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;
    int C;
    string name;
    while (n--) {
        int max = 0;
        string max_name;
        int p; cin >> p;
        while (p--) {
            cin >> C >> name;
            if (C > max) {
                max = C;
                max_name = name;
            }
        }

        cout << max_name << "\n";
    }

    return 0;
}