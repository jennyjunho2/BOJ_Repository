#include "bits/stdc++.h"
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct ball {
    int color, weight, idx;
    ball(int _color, int _weight, int _idx) : color(_color), weight(_weight), idx(_idx) {};
};

bool cmp(const ball& a, const ball& b) {
    return a.weight == b.weight ? a.color < b.color : a.weight < b.weight;
}

vector<ball> balls;
int N;
int acc_C[200001];
int acc_S[200001];
int ans[200001];

int main() {fastio

    cin >> N;
    FOR(i, 0, N) {
        int C, S; cin >> C >> S;
        balls.push_back({C, S, i});
    }
    sort(balls.begin(), balls.end(), cmp);

    int temp_sum = 0;
    FOR(i, 0, N) {
        ball temp = balls[i];
        int temp_weight = temp.weight;
        int temp_color = temp.color;
        int temp_idx = temp.idx;

        acc_C[temp_color] += temp_weight;
        acc_S[temp_weight] += temp_weight;
        temp_sum += temp_weight;

        ans[temp_idx] = temp_sum - acc_C[temp_color] - acc_S[temp_weight] + temp_weight;
        if (i > 0 && balls[i-1].color == temp_color && balls[i-1].weight == temp_weight) {
            ans[temp_idx] = ans[balls[i-1].idx];
        }
    }

    FOR(i, 0, N) {
        cout << ans[i] << endl;
    }

    return 0;
}
