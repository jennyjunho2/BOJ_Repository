// https://www.acmicpc.net/board/view/9348
#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

const int SIZE = 1<<20;
char BUF[SIZE];
int m;

inline char read_char() {
	if (m == SIZE) {
        // fread로 BUF에 저장
		fread(BUF, 1, SIZE, stdin);
		m = 0;
	}

	return BUF[m++];
}

inline void readInt(int &x) {
	int tmp;

	x = read_char() & 0b1111;

	while ((tmp = read_char()) != '\n') {
		x = x * 10 + (tmp & 0b1111);
	}
}

int main() {

	long long sum = 0;
	int N, temp;

	readInt(N);
	cout << N << endl;
	while (N--) {
		readInt(temp);
		sum += temp;
	}

	cout << sum;
}