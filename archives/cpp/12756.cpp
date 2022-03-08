#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A_atk, A_hp, B_atk, B_hp;
    cin >> A_atk >> A_hp; cin >> B_atk >> B_hp;
    while (true) {
        A_hp -= B_atk;
        B_hp -= A_atk;

        if (A_hp <= 0 && B_hp <= 0) {
            cout << "DRAW";
            break;
        } else if (A_hp <= 0 && B_hp > 0) {
            cout << "PLAYER B";
            break;
        } else if (A_hp > 0 && B_hp <= 0) {
            cout << "PLAYER A";
            break;
        }
    }


    return 0;
}