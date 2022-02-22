#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int V;
    cin >> V;
    string word;
    cin >> word;
    
    int A = 0, B = 0;
    for (int i = 0; i < V; i++) {
        if (word[i] == 'A') { A++; }
        else { B++; }
    }
    
    if (A > B) { cout << 'A'; }
    else if (A < B) { cout << 'B'; }
    else { cout << "Tie"; }
}