#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;

void func(int depth) {
    FOR(i, 0, 4*depth) { cout << '_'; }
    cout << "\"����Լ��� ������?\"" << endl;

    if (depth == N) {
        FOR(i, 0, 4*depth) { cout << '_'; }
        cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << endl;
        FOR(i, 0, 4*depth) { cout << '_'; }
        cout << "��� �亯�Ͽ���." << endl;
        return;
    } else {
        FOR(i, 0, 4*depth) { cout << '_'; }
        cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << endl;
        FOR(i, 0, 4*depth) { cout << '_'; }
        cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << endl;
        FOR(i, 0, 4*depth) { cout << '_'; }
        cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;
        func(depth + 1);
    }

    FOR(i, 0, 4*depth) { cout << '_'; }
    cout << "��� �亯�Ͽ���." << endl;
}

int main() { fastio

    cin >> N;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
    func(0);

    return 0;
}