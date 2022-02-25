#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

bool isPalindrome(int num) {
    if (num % 10 == 0 && num != 0) {
        return false;
    } else {
        int num_rev = 0;
        while (num > num_rev) {
            num_rev = num_rev * 10 + num % 10;
            num /= 10;
        }

        return num == num_rev || num == num_rev / 10;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true){
        int N; cin >> N;
        if (N == 0) { return 0; }

        if (isPalindrome(N)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    
    return 0;
}