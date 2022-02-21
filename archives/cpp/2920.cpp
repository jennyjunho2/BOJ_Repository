#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[8];
    bool ascending = true;
    bool descending = true;
    for (int i = 0; i < 8; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < 7; i++){
        if (arr[i] > arr[i+1]) {
            ascending = false;
        }

        if (arr[i] < arr[i+1]) {
            descending = false;
        }
    }

    if (ascending) { cout << "ascending";}
    else if (descending) { cout << "descending";}
    else {cout << "mixed";}

    return 0;
}