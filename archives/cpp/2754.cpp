#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string word;
    cin >> word;
    
    cout << fixed;
    cout.precision(1);

    if (word == "A+") { cout << 4.3; }
    else if (word == "A0") { cout << 4.0; }
    else if (word == "A-") { cout << 3.7; }
    else if (word == "B+") { cout << 3.3; }
    else if (word == "B0") { cout << 3.0; }
    else if (word == "B-") { cout << 2.7; }
    else if (word == "C+") { cout << 2.3; }
    else if (word == "C0") { cout << 2.0; }
    else if (word == "C-") { cout << 1.7; }
    else if (word == "D+") { cout << 1.3; }
    else if (word == "D0") { cout << 1.0; }
    else if (word == "D-") { cout << 0.7; }
    else { cout << 0.0;}

    return 0;
}