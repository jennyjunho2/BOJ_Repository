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

    double kg_to_lb = 2.2046;
    double lb_to_kg = 0.4536;
    double l_to_gal = 0.2642;
    double gal_to_l = 3.7854;

    int T; cin >> T;
    while (T--) {
        double num; string word;
        cin >> num >> word;
        cout << fixed;
        cout.precision(4);
        if (word == "kg") {
            cout << num * kg_to_lb << " lb"<< endl;
        } else if (word == "l") {
            cout << num * l_to_gal << " g" << endl;
        } else if (word == "lb") {   
            cout << num * lb_to_kg << " kg" << endl;
        } else if (word == "g") {
            cout << num * gal_to_l << " l" << endl;
        }
    }

    return 0;
}