#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    deque<int> im;
    while (T--) {
        im.clear();
        int cnt = 0;
        int N, M; cin >> N >> M;
        FOR(i, 0, N) {
            int temp; cin >> temp;
            im.push_back(temp);
        }
        
        while (im.size()) {
            int max_num = *max_element(im.begin(), im.end());
            int num = im[0];
            im.pop_front();
            M--;
            
            if (max_num == num) {
                cnt++;
                if (M < 0) {
                    cout << cnt << endl;
                    break;
                }
            } else {
                im.push_back(num);
                if (M < 0) {
                    M = im.size() - 1;
                }
            }
        }
    }
    
    return 0;
}