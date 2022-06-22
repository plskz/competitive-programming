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
    cin >> n;
    ll ans = 0;

    vector<ll> v(n);
    for (auto &x : v) cin >> x;

    ll A = 1;
    ll B = 1;

    for (int i = 0; i < n - 1; i++) {
        ll cur = v[i];
        if (v[i + 1] >= cur)
            A++;
        else
            break;
    }
    for (int i = n - 1; i > 0; i--) {
        ll cur = v[i];
        if (v[i - 1] >= cur)
            B++;
        else
            break;
    }

    // cout << "a: " << A << " B: " << B << '\n';

    cout << min(n, A + B);
    return 0;
}