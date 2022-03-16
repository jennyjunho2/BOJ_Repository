#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int A, B;
bool visited[10000];
int func_D(int num) { return 2 * num % 10000; }
int func_S(int num) { return num == 0 ? 9999 : num-1; }
int func_L(int num) { return (num%1000)*10 + num/1000; }
int func_R(int num) { return (num%10)*1000 + num/10; }

string bfs(int start) {
    queue<pair<int, string>> q;
    visited[start] = true;
    q.push({start, ""});
    while (!q.empty()) {
        int temp_num = q.front().first;
        string temp_string = q.front().second;
        q.pop();

        if (temp_num == B) {
            return temp_string;
        }

        int temp_D = func_D(temp_num);
        int temp_S = func_S(temp_num);
        int temp_L = func_L(temp_num);
        int temp_R = func_R(temp_num);
        if (!visited[temp_D]) {
            q.push({temp_D, temp_string + "D"});
            visited[temp_D] = true;
        }

        if (!visited[temp_S]) {
            q.push({temp_S, temp_string + "S"});
            visited[temp_S] = true;
        }

        if (!visited[temp_L]) {
            q.push({temp_L, temp_string + "L"});
            visited[temp_L] = true;
        }

        if (!visited[temp_R]) {
            q.push({temp_R, temp_string + "R"});
            visited[temp_R] = true;
        }
    }
}

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        cin >> A >> B;
        memset(visited, 0, sizeof(visited));
        string result = bfs(A);
        cout << result << endl;
    }

    return 0;
}