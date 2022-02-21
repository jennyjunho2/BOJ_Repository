#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    getline(cin, str);
    int str_length = str.length();
    int cnt = 1;
    bool isSpace = false;

    if (str.empty()) {
        cout << "0";
        return 0;
    }

    for (int i = 0; i < str_length; i++) {
        if (str[i] == ' ') {
            cnt++;
        }
    }
    
    if (str[0] == ' '){
        cnt--;
    }
    if (str[str_length - 1] == ' '){
        cnt--;
    }

    std::cout << cnt << "\n";

    return 0;
}