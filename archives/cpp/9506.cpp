#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    vector<int> nums;
    int sum;
    while (true) {
        cin >> n;
        if (n == -1) { break; }
        nums.clear();
        nums.push_back(1);
        sum = 1;

        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                nums.push_back(i);
                nums.push_back(n / i);
                sum += (i + n/i);
            }
        }

        if (sum == n) {
            sort(nums.begin(), nums.end());
            cout << n << " = ";
            for (int i = 0; i < nums.size() - 1; i++){
                cout << nums[i] << " + ";
            }
            cout << nums[nums.size() - 1] << "\n";
        } else {
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}