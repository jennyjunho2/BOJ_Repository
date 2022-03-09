#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

double calc(const int& a, const int& b, const int& c, const int& d) {
    return (double)a/(double)c + (double)b/(double)d;
}

int main() {
    fastio

    int A, B, C, D; cin >> A >> B; cin >> C >> D; 
    double zero = calc(A, B, C, D);
    double one = calc(C, A, D, B);
    double two = calc(D, C, B, A);
    double three = calc(B, D, A, C);

    double max_num = max({zero, one, two, three});
    if (max_num == zero) {
        cout << 0;
    } else if (max_num == one) {
        cout << 1;
    } else if (max_num == two) {
        cout << 2;
    } else {
        cout << 3;
    }

    return 0;
}