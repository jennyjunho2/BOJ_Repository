#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int album_cnt(int num) {
    switch (num) {
    case 1967:
        return 1;
    case 1969:
        return 1;
    case 1970:
        return 1;
    case 1971:
        return 1;
    case 1972:
        return 1;
    case 1973:
        return 2;
    case 1974:
        return 1;
    case 1975:
        return 1;
    case 1976:
        return 1;
    case 1977:
        return 2;
    case 1979:
        return 1;
    case 1980:
        return 1;
    case 1983:
        return 1;
    case 1984:
        return 1;
    case 1987:
        return 1;
    case 1993:
        return 1;
    case 1995:
        return 1;
    case 1997:
        return 1;
    case 1999:
        return 1;
    case 2002:
        return 1;
    case 2003:
        return 1;
    case 2013:
        return 1;
    case 2016:
        return 1;
    default:
        return 0;
    }
}

int print_album(int num) {
    switch (num) {
    case 1967:
        cout << 1967 << ' ' << "DavidBowie" << endl;
        return 1;
    case 1969:
        cout << 1969 << ' ' << "SpaceOddity" << endl;
        return 1;
    case 1970:
        cout << 1970 << ' ' << "TheManWhoSoldTheWorld" << endl;
        return 1;
    case 1971:
        cout << 1971 << ' ' << "HunkyDory" << endl;
        return 1;
    case 1972:
        cout << 1972 << ' ' << "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars" << endl;
        return 1;
    case 1973:
        cout << 1973 << ' ' << "AladdinSane" << endl;
        cout << 1973 << ' ' << "PinUps" << endl;
        return 2;
    case 1974:
        cout << 1974 << ' ' << "DiamondDogs" << endl;
        return 1;
    case 1975:
        cout << 1975 << ' ' << "YoungAmericans" << endl;
        return 1;
    case 1976:
        cout << 1976 << ' ' << "StationToStation" << endl;
        return 1;
    case 1977:
        cout << 1977 << ' ' << "Low" << endl;
        cout << 1977 << ' ' << "Heroes" << endl;
        return 2;
    case 1979:
        cout << 1979 << ' ' << "Lodger" << endl;
        return 1;
    case 1980:
        cout << 1980 << ' ' << "ScaryMonstersAndSuperCreeps" << endl;
        return 1;
    case 1983:
        cout << 1983 << ' ' << "LetsDance" << endl;
        return 1;
    case 1984:
        cout << 1984 << ' ' << "Tonight" << endl;
        return 1;
    case 1987:
        cout << 1987 << ' ' << "NeverLetMeDown" << endl;
        return 1;
    case 1993:
        cout << 1993 << ' ' << "BlackTieWhiteNoise" << endl;
        return 1;
    case 1995:
        cout << 1995 << ' ' << "1.Outside" << endl;
        return 1;
    case 1997:
        cout << 1997 << ' ' << "Earthling" << endl;
        return 1;
    case 1999:
        cout << 1999 << ' ' << "Hours" << endl;
        return 1;
    case 2002:
        cout << 2002 << ' ' << "Heathen" << endl;
        return 1;
    case 2003:
        cout << 2003 << ' ' << "Reality" << endl;
        return 1;
    case 2013:
        cout << 2013 << ' ' << "TheNextDay" << endl;
        return 1;
    case 2016:
        cout << 2016 << ' ' << "BlackStar" << endl;
        return 1;
    default:
        return 0;
    }
}

int main() {
    fastio

    int Q; cin >> Q;
    while (Q--) {
        int S, E; cin >> S >> E;
        int cnt = 0;
        FOR(i, S, E+1) {
            cnt += album_cnt(i);
        }

        cout << cnt << endl;

        FOR(i, S, E+1) {
            print_album(i);
        }
    }

    return 0;
}