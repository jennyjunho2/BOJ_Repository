#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        int N, M; cin >> N >> M;
        if (cin.eof()) { break; }

        vector<int> nums;
        int cnt = 0;
        FOR(i, N, M+1) {
            nums.clear();
            int num = i;
            while (num > 0) {
                nums.push_back(num%10);
                num /= 10;
            }

            sort(nums.begin(), nums.end());
            
            vector<int> nums2(nums);
            nums.erase(unique(nums.begin(), nums.end()), nums.end());
            if (nums2 == nums) {
                cnt++;
            }
        }

        cout << cnt << endl;

    }

    return 0;
}

/* 
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

bool Check(int n) {
	static bitset<10> B; B.reset();
	for (; n; n /= 10) {
		if (B[n % 10]) return 0;
		B[n % 10] = 1;
	}
	return 1;
}

int main() {
	fastio;
	for (int a, b; cin >> a >> b;) {
		int res = 0;
		for (int i = a; i <= b; i++) if (Check(i)) res++;
		cout << res << '\n';
	}
}
*/