#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

bool cmp(const pair<int, string>& a, const pair<int, string>& b){
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    vector<pair<int, string>> people;
    FOR(i, 0, N) {
        int age; string name; cin >> age >> name;
        people.push_back(pair<int, string>(age, name));
    }

    stable_sort(people.begin(), people.end(), cmp);
    
    FOR(i, 0, N) {
        cout << people[i].first << ' ' << people[i].second << endl;
    }

    return 0;
}