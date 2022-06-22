#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int lo = 0, hi = 0;
    int m;
    cin >> m;
    int a[m];

    for (int i = 0; i < m; i++) {
        cin >> a[i];
        hi += a[i];
    }

    int x, y;
    cin >> x >> y;

    for (int i = 0; i < m; i++) {
        if (lo >= x && lo <= y && hi >= x && hi <= y) return cout << i + 1, 0;
        lo += a[i];
        hi -= a[i];
    }
    cout << 0;

    return 0;
}