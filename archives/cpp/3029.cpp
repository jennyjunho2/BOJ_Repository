#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int h1, m1, s1, h2, m2, s2;
    string start, end; cin >> start; cin >> end;
    h1 = stoi(start.substr(0, 2));
    m1 = stoi(start.substr(3, 2));
    s1 = stoi(start.substr(6, 2));

    h2 = stoi(end.substr(0, 2));
    m2 = stoi(end.substr(3, 2));
    s2 = stoi(end.substr(6, 2));

    int elapsed_time = 3600*(h2-h1) + 60*(m2-m1) + s2-s1;
    if (elapsed_time <= 0) { elapsed_time += 86400; }
    int hour = elapsed_time / 3600;
    int minute = (elapsed_time - hour*3600) / 60;
    int sec = elapsed_time - hour*3600 - 60*minute;

    if (hour < 10) {
        cout << '0' << hour << ':';
    } else {
        cout << hour << ':';
    }

    if (minute < 10) {
        cout << '0' << minute << ":";
    } else {
        cout << minute << ':';
    }

    if (sec < 10) {
        cout << '0' << sec;
    } else {
        cout << sec;
    }
    
    return 0;
}