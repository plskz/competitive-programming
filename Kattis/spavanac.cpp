#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int h, m;
    cin >> h >> m;

    m -= 45;

    if (m < 0) {  // at first i thought (m-45<0) would work, then i realize it will not change the value of the fucking m
        h--;
        m += 60;
    }
    if (h < 0) {
        h += 24;
    }
    cout << h << ' ' << m;

    // 45 minutes before

    // 10 10 = 9 25

    // 0 30 = 23 45

    // 23 40 = 22 55

    return 0;
}
