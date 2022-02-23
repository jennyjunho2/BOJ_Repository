#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string first, last;
    cin >> first;
    cin >> last;
    int h1 = stoi(first.substr(0, 2));
    int m1 = stoi(first.substr(3, 2));
    int s1 = stoi(first.substr(6, 2));
    int total1 = h1*3600 + m1*60 + s1;

    int h2 = stoi(last.substr(0, 2));
    int m2 = stoi(last.substr(3, 2));
    int s2 = stoi(last.substr(6, 2));
    int total2 = h2*3600 + m2*60 + s2;

    int diff;
    if (total2 >= total1) {
        diff = total2 - total1;
    } else {
        diff = total2 - total1 + 86400;
    }

    int diff_h = diff / 3600;
    int diff_m = (diff - diff_h * 3600) / 60;
    int diff_s = diff - diff_h * 3600 - diff_m * 60;

    printf("%02d:%02d:%02d", diff_h, diff_m, diff_s);

    return 0;
}