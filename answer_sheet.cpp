#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
<<<<<<< HEAD
using p = pair<int, int>;
int R, C;
char graph[1500][1500];
bool visited[1500][1500];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
bool is_found;
p swan;
queue<p> q_swan, q_swan_next;
queue<p> q_water, q_water_next;

void bfs_swan() {
    while(!q_swan.empty() && !is_found) {
        int y = q_swan.front().first;
        int x = q_swan.front().second;
        q_swan.pop();

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= R || nx < 0 || nx >= C || visited[ny][nx]) { continue; }

            visited[ny][nx] = true;
            if (graph[ny][nx] == '.') {
                q_swan.push({ny, nx});
            } else if (graph[ny][nx] == 'X') {
                q_swan_next.push({ny, nx});
            } else if (graph[ny][nx] == 'L') {
                is_found = true;
                break;
            }
        }
    }
}

void bfs_water() {
    while(!q_water.empty()) {
        int y = q_water.front().first;
        int x = q_water.front().second;
        q_water.pop();

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= R || nx < 0 || nx >= C) { continue; }
            
            if (graph[ny][nx] == 'X') {
                graph[ny][nx] = '.';
                q_water_next.push({ny, nx});
            }
        }
    }
}

void empty_queue(queue<p>& q) {
    while(!q.empty()) {q.pop(); }
}

int main() {fastio
    
    cin >> R >> C;
    FOR(i, 0, R) {
        FOR(j, 0, C) {
            cin >> graph[i][j];

            if (graph[i][j] == 'L') {
                swan.first = i; swan.second = j;
            } 
            
            if (graph[i][j] != 'X') {
                q_water.push({i, j});
            }
        }
    }

    int days = 0;
    q_swan.push({swan.first, swan.second});
    visited[swan.first][swan.second] = true;
    while(!is_found) {
        bfs_swan();
        if (!is_found) {
            bfs_water();
            q_water = q_water_next;
            q_swan = q_swan_next;

            empty_queue(q_water_next);
            empty_queue(q_swan_next);
            days++;
        }
    }

    cout << days;
=======
// https://www.acmicpc.net/problem/2733
int memory[256];

int main() {fastio
    
    string T; getline(cin, T);
    FOR(i, 1, stoi(T)+1) {
        string ans = "";
        string com = "";
        stack<char> s;
        memset(memory, 0, sizeof(memory));
        int ptr = 0;
        while (true) {
            string S; getline(cin, S);
            if (S == "end") { break;}

            for (char c: S) {
                if (c == '%') { break; }
                com += c;
            }
        }
        cout << com << endl;
        int com_size = com.size();
        FOR(j, 0, com_size) {
            char ch = com[j];
            if (ch == '>') {
                ptr = (ptr == 32767 ? 0 : ptr+1);
            }
            else if (ch == '<') {
                ptr = (ptr == 0 ? 32767 : ptr-1);
            }
            else if (ch == '+') {
                memory[ptr] = (memory[ptr] == 255 ? 0 : memory[ptr]+1);
            }
            else if (ch == '-') {
                memory[ptr] = (memory[ptr] == 0 ? 255 : memory[ptr]-1);
            }
            else if (ch == '.') {
                ans += char(memory[ptr]);
            }
            else if (ch == '[') {
                s.push('[');
                if (memory[ptr] == 0) {
                    while(com[j] != ']') {
                        j++;
                    }
                }
            }
            else if (ch == ']') {
                s.pop();
                if (memory[ptr] != 0) {
                    while(com[j] != '[') {
                        j--;
                    }
                }
            }
        }
        cout << "PROGRAM #" << i << ":" << endl;
        if (!s.empty()) {
            cout << "COMPILE ERROR" << endl;
        } else {
            cout << ans << endl;
        }
    }

>>>>>>> 3da1784ef669631b9884652502e303a582ed3954

    return 0;
}