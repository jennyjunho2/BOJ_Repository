#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int score(const double& A, const double& B, const double& C, const int& P) {
    return floor(A * pow(abs(B-P), C));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int a, b, c, d, e, f, g;
        cin >> a >> b >> c >> d >> e >> f >> g;

        int A = score(9.23076, 26.7, 1.835, a);
        int B = score(1.84523, 75.0, 1.348, b);
        int C = score(56.0211, 1.5, 1.05, c);
        int D = score(4.99087, 42.5, 1.81, d);
        int E = score(0.188807, 210, 1.41, e);
        int F = score(15.9803, 3.8, 1.04, f);
        int G = score(0.11193, 254.0, 1.88, g);

        cout << A+B+C+D+E+F+G << endl;
    }
    
    return 0;
}