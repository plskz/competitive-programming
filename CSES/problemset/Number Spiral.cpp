#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        ll y, x;
        cin >> y >> x;

        if (x > y) {
            if (x & 1)
                cout << x * x - y + 1 << '\n';
            else
                cout << (x - 1) * (x - 1) + y << '\n';
        } else {
            if (y & 1)
                cout << (y - 1) * (y - 1) + x << '\n';
            else
                cout << y * y - x + 1 << '\n';
        }
    }

    return 0;
}