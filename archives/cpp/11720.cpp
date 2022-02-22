#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    string num;
    cin >> N >> num;

    int result = 0;
    for (auto word : num){
        result += (int)word - '0';
    }

    cout << result;
}