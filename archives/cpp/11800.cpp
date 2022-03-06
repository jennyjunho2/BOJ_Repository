#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    map<int, string> table = {
        {1, "Yakk"}, {2, "Doh"}, {3, "Seh"},
        {4, "Ghar"}, {5, "Bang"}, {6, "Sheesh"}
    };

    FOR(i, 1, T+1) {
        cout << "Case " << i << ": ";
        int a, b; cin >> a >> b;
        if (a == b) {
            switch (a) {
                case 1:
                    cout << "Habb Yakk" << endl;
                    break;
                case 2:
                    cout << "Dobara" << endl;
                    break;
                case 3:
                    cout << "Dousa" << endl;
                    break;
                case 4:
                    cout << "Dorgy" << endl;
                    break;
                case 5:
                    cout << "Dabash" << endl;
                    break;
                case 6:
                    cout << "Dosh" << endl;
                    break;
            }
        } else {
            if ((a == 5 && b == 6) || (a == 6 && b == 5)) {
                cout << "Sheesh Beesh" << endl;
            } else {
                cout << table[max(a, b)] << ' ' << table[min(a, b)] << endl;
            }
        }
    }

    return 0;
}