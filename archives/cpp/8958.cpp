#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string words;
    int streak = 0;
    int point;

    cin >> T;
    while (T--) {
        cin >> words;
        point = 0;
        streak = 0;

        for (auto word: words){
            if (word == 'O') {
                streak++;
                point += streak;
            } else {
                streak = 0;
            }
        }
        cout << point << "\n";
    }

    return 0;
}