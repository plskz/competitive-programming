#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    // bronze
    int b1, b2;
    cin >> b1 >> b2;

    // silver
    int s1, s2;
    cin >> s1 >> s2;

    // gold
    int g1, g2;
    cin >> g1 >> g2;

    // plat
    int p1, p2;
    cin >> p1 >> p2;

    cout << s2 - s1 + g2 - g1 + p2 - p1 << '\n';
    cout << g2 - g1 + p2 - p1 << '\n';
    cout << p2 - p1 << '\n';

    return 0;
}