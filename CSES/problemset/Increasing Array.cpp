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

    int n;
    cin >> n;
    ll ans = 0;
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        mx = max(mx, x);
        ans += mx - x;
    }
    cout << ans;

    return 0;
}