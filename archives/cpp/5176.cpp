#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K; cin >> K;
    vector<int> v;
    set<int> s;
    while (K--) {
        v.clear();
        s.clear();
        int P, M;
        cin >> P >> M;
        FOR(i, 0, P) {
            int temp;
            cin >> temp;
            v.push_back(temp);
            s.insert(temp);
        }
        cout << v.size() - s.size() << endl;
    }    

    return 0;
}