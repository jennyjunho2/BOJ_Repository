#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string A, B;
    char op;
    cin >> A;
    cin >> op;
    cin >> B;

    if (A.length() < B.length()) {
        string temp;
        temp = A;
        A = B;
        B = temp;
    }

    int A_len = A.length();
    int B_len = B.length();

    if (op == '+'){
        if (A_len == B_len){
            A[0] = '2';
            cout << A;
        } else{
            A[A_len - B_len] = '1';
            cout << A;
        }
    } else {
        for (int i = 1 ; i < B_len; i++){
            A += '0';
        }
        cout << A;
    }

    return 0;
}