#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct student{
    string name; int kor, eng, math;
    student(string _name, int _kor, int _eng, int _math) : name(_name), kor(_kor), eng(_eng), math(_math) {};
};

bool cmp(const student& a, const student& b) {
    if (a.kor == b.kor) {
        if (a.eng == b.eng) {
            if (a.math == b.math) {
                return a.name < b.name;
            } else{
                return a.math > b.math;
            }
        } else {
            return a.eng < b.eng;
        }
    } else {
        return a.kor > b.kor;
    }
}

vector<student> p;
int N;

int main() { fastio

    cin >> N;
    FOR(i, 0, N) {
        string a; int b, c, d; cin >> a >> b >> c >> d;
        p.push_back({a, b, c, d});
    }

    sort(p.begin(), p.end(), cmp);
    for (student i : p) {
        cout << i.name << endl;
    }

    return 0;
} 