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

    ll n;
    string s, t;
    cin >> n >> s >> t;
    ll ans = 0;
    ll l = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == t[0] && s[i + 1] == t[1]) {
            ll from = i - l + 1;
            ll to = n - (i + 1);
            ans += from * to;
            l = i + 1;
        }
    }
    cout << ans;

    return 0;
}