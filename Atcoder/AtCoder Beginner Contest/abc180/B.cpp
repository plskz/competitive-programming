#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;
    cin >> n;
    ll a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++) {
        ll cur;
        cin >> cur;
        a += abs(cur);
        b += cur * cur;
        c = max(c, abs(cur));
    }
    cout << fixed << setprecision(9) << a << ' ' << sqrt(b) << ' ' << c;
    return 0;
}