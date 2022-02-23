#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

struct scores {
    int score;
    int num;
};

bool compare(const scores& A, const scores& B){
    return A.score > B.score;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<scores> p(8);
    int sum = 0;
    int idx[5];

    FOR(i, 0, 8) {
        int temp;
        cin >> temp;
        p[i].score = temp;
        p[i].num = i + 1;
    }

    stable_sort(p.begin(), p.end(), compare);

    FOR(i, 0, 5) {
        sum += p[i].score;
        idx[i] = p[i].num;
    }

    sort(begin(idx), end(idx));

    cout << sum << endl;
    FOR(i, 0, 5){
        cout << idx[i] << ' ';
    }

    return 0;
}