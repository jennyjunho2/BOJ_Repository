#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> arr;
    int temp;
    int T = 3;
    while (T--) {
        arr.clear();
        FOR(i, 0, 4){
            cin >> temp;
            arr.push_back(temp);
        }

        switch (count(arr.begin(), arr.end(), 0)) {
            case 0:
                cout << 'E' << endl;
                break;
            case 1:
                cout << 'A' << endl;
                break;
            case 2:
                cout << 'B' << endl;
                break;
            case 3:
                cout << 'C' << endl;
                break;
            case 4:
                cout << 'D' << endl;
                break;
        }
    }
    

    return 0;
}