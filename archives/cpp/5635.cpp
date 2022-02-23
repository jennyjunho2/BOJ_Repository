#include <bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int day, month, year;
};

bool compare(const struct student& x, const struct student& y){
    if (x.year < y.year) { 
        return true; 
    } else if (x.year > y.year) {
        return false;
    } else {
        if (x.month < y.month) {
            return true;
        } else if (x.month > y.month) {
            return false;
        } else {
            if (x.day < y.day) {
                return true;
            } else {
                return false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;
    vector<student> table;
    for (int i = 0; i < n; i++) {
        string name;
        int d, m, y;
        cin >> name >> d >> m >> y;
        table.push_back({name, d, m, y});
    }

    sort(table.begin(), table.end(), compare);
    cout << table[n-1].name << "\n" << table[0].name;

    return 0;
}