#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> scores(5);
    int T; cin >> T;
    while (T--) {
        scores.clear();
        FOR(i, 0, 5){
            int temp;
            cin >> temp;
            scores.push_back(temp);
        }

        sort(scores.begin(), scores.end());
        if (scores[3] - scores[1] >= 4) {
            cout << "KIN" << endl;
        } else {
            cout << scores[1] + scores[2] + scores[3] << endl;
        }
    }

    return 0;
}