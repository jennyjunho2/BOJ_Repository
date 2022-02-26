#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> lines;
    while (true) {
        lines.clear();
        int A, B, C; cin >> A >> B >> C;
        if (A == 0 && B == 0 && C == 0) { return 0; }
        lines.push_back(A);
        lines.push_back(B);
        lines.push_back(C);
        sort(lines.begin(), lines.end());

        if (lines[0] * lines[0] + lines[1] * lines[1] == lines[2] * lines[2]) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }

    return 0;
}