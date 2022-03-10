#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

vector<char> A;
int k;
bool visited[10] = {0, };
int arr[10];
string max_num = "0";
string min_num = "9999999999";

void backtrack(int depth) {
    if (depth == k+1) {

        FOR(i, 0, k) {
            char ch = A[i];
            if (ch == '<') {
                if (arr[i] > arr[i+1]) {
                    return;
                }
            } else {
                if (arr[i] < arr[i+1]) {
                    return;
                }
            }
        }

        string num = "";
        FOR(i, 0, k+1) {
            num += char(arr[i] + '0');
        }

        max_num = max(max_num, num);
        min_num = min(min_num, num);
        return;
    } 

    FOR(i, 0, 10) {
        if(!visited[i]) {
            arr[depth] = i;
            visited[i] = true;
            backtrack(depth + 1);
            visited[i] =false;
        }
    }
}

int main() {
    fastio

    cin >> k;
    FOR(i, 0, k) {
        char temp; cin >> temp;
        A.push_back(temp);
    }

    backtrack(0);

    cout << max_num << endl << min_num;
    return 0;
}