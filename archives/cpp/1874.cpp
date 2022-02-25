#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> s;
    vector<char> ans;
    int n; cin >> n;
    int num = 1;
    while (n--) {
        int temp; cin >> temp;
        while (num <= temp) {
            s.push(num);
            ans.push_back('+');
            num++;
        }

        if (s.top() == temp) {
            s.pop();
            ans.push_back('-');
        } else {
            cout << "NO";
            return 0;
        }
    }

    FOR(i, 0, ans.size()) {
        cout << ans[i] << endl;
    }
    
    return 0;
}