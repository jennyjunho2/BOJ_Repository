#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<int> trees;
vector<int> trees_dist;
int gcd_temp;
int gcd(const int& a, const int& b) {
    return b == 0 ? a : gcd(b, a%b);
}

int main() {
    fastio

    int N; cin >> N;
    trees.resize(N);
    FOR(i, 0, N) { cin >> trees[i]; }
    sort(trees.begin(), trees.end());

    trees_dist.resize(N-1);
    FOR(i, 0, N-1) {
        trees_dist[i] = trees[i+1] - trees[i];
    }

    gcd_temp = trees_dist[0];
    FOR(i, 1, N-1) {    
        gcd_temp = gcd(gcd_temp, trees_dist[i]);
    }

    transform(trees_dist.begin(), trees_dist.end(), trees_dist.begin(), [](const int& n) { return (n / gcd_temp) - 1;});
    
    int sum = 0;
    FOR(i, 0, N-1) {
        sum += trees_dist[i];
    }

    cout << sum;
    return 0;
}