#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct point {
    int w, v, u, t, s, r, q, p, o, n, m;
    point(int _w, int _v, int _u, int _t, int _s, int _r, int _q, int _p, int _o, int _n, int _m) {
        this->m = _m; this->n = _n; this->o = _o;
        this->p = _p; this->q = _q; this->r = _r;
        this->s = _s; this->t = _t; this->u = _u;
        this->v = _v; this->w = _w;
    }
};

int dM[22] = {1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int dN[22] = {0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int dO[22] = {0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int dP[22] = {0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int dQ[22] = {0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int dR[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int dS[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0};
int dT[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0};
int dU[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0};
int dV[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0};
int dW[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1};

int M, N, O, P, Q, R, S, T, U, V, W;
queue<point> qu;
int result = 0;

int main() { fastio

    cin >> M >> N >> O >> P >> Q >> R >> S >> T >> U >> V >> W;
    int graph[W][V][U][T][S][R][Q][P][O][N][M];

    FOR(a, 0, W) {
        FOR(b, 0, V) {
            FOR(c, 0, U) {
                FOR(d, 0, T) {
                    FOR(e, 0, S) {
                        FOR(f, 0, R) {
                            FOR(g, 0, Q) {
                                FOR(h, 0, P) {
                                    FOR(i, 0, O) {
                                        FOR(j, 0, N) {
                                            FOR(k, 0, M) {
                                                cin >> graph[a][b][c][d][e][f][g][h][i][j][k];

                                                if (graph[a][b][c][d][e][f][g][h][i][j][k] == 1) {
                                                    qu.push({a, b, c, d, e, f, g, h, i, j, k});
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    while (!qu.empty()) {
        point temp = qu.front();
        qu.pop();

        int m = temp.m; int n = temp.n; int o = temp.o;
        int p = temp.p; int q = temp.q; int r = temp.r;
        int s = temp.s; int t = temp.t; int u = temp.u;
        int v = temp.v; int w = temp.w;

        FOR(i, 0, 22) {
            int nm = m + dM[i]; int nn = n + dN[i]; int no = o + dO[i];
            int np = p + dP[i]; int nq = q + dQ[i]; int nr = r + dR[i];
            int ns = s + dS[i]; int nt = t + dT[i]; int nu = u + dU[i];
            int nv = v + dV[i]; int nw = w + dW[i];

            if (nm < 0 || nm >= M) { continue; }
            if (nn < 0 || nn >= N) { continue; }
            if (no < 0 || no >= O) { continue; }
            if (np < 0 || np >= P) { continue; }
            if (nq < 0 || nq >= Q) { continue; }
            if (nr < 0 || nr >= R) { continue; }
            if (ns < 0 || ns >= S) { continue; }
            if (nt < 0 || nt >= T) { continue; }
            if (nu < 0 || nu >= U) { continue; }
            if (nv < 0 || nv >= V) { continue; }
            if (nw < 0 || nw >= W) { continue; }

            if (graph[nw][nv][nu][nt][ns][nr][nq][np][no][nn][nm] == 0) {
                graph[nw][nv][nu][nt][ns][nr][nq][np][no][nn][nm] = graph[w][v][u][t][s][r][q][p][o][n][m] + 1;
                qu.push({nw, nv, nu, nt, ns, nr, nq, np, no, nn, nm});
            }
        }
    }

    FOR(a, 0, W) {
        FOR(b, 0, V) {
            FOR(c, 0, U) {
                FOR(d, 0, T) {
                    FOR(e, 0, S) {
                        FOR(f, 0, R) {
                            FOR(g, 0, Q) {
                                FOR(h, 0, P) {
                                    FOR(i, 0, O) {
                                        FOR(j, 0, N) {
                                            FOR(k, 0, M) {
                                                if (graph[a][b][c][d][e][f][g][h][i][j][k] == 0) {
                                                    cout << -1;
                                                    return 0;
                                                }

                                                result = max(result, graph[a][b][c][d][e][f][g][h][i][j][k]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << result-1;

    return 0;
}