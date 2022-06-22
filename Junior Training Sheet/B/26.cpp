#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, f;
    cin >> n >> f;

    vector<ll> v;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll k, l;
        cin >> k >> l;
        ll x = min(k, l);
        ll y = min(2 * k, l);
        v.push_back(y - x);
        ans += x;
    }
    sort(allr(v));
    for (int i = 0; i < f; i++) ans += v[i];

    cout << ans;

    return 0;
}