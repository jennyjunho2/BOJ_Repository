#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M;
char graph[200][200];

int main() {fastio

    regex mbti("(E|I)(N|S)(F|T)(P|J)|(P|J)(F|T)(N|S)(E|I)");

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> graph[i][j];
        }
    }
    
    int cnt = 0;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (i < N-3) {
                string temp1; temp1.resize(4); // 세로
                temp1[0] = graph[i][j]; temp1[1] = graph[i+1][j];
                temp1[2] = graph[i+2][j]; temp1[3] = graph[i+3][j];
                if (regex_match(temp1, mbti)) { cnt++; }
            }

            if (j < M-3) {
                string temp2; temp2.resize(4);// 가로
                temp2[0] = graph[i][j]; temp2[1] = graph[i][j+1];
                temp2[2] = graph[i][j+2]; temp2[3] = graph[i][j+3];
                if (regex_match(temp2, mbti)) { cnt++; }
            }

            if (i < N-3 && j < M-3) {
                string temp3, temp4;
                temp3.resize(4); temp4.resize(4); // 대각선
                temp3[0] = graph[i][j]; temp3[1] = graph[i+1][j+1];
                temp3[2] = graph[i+2][j+2]; temp3[3] = graph[i+3][j+3];

                temp4[0] = graph[i+3][j]; temp4[1] = graph[i+2][j+1];
                temp4[2] = graph[i+1][j+2]; temp4[3] = graph[i][j+3];

                if (regex_match(temp3, mbti)) { cnt++; }
                if (regex_match(temp4, mbti)) { cnt++; }
            }
        }
    }

    cout << cnt;

    return 0;
}
