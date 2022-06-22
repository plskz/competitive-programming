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

    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &x : v) cin >> x;
    sort(all(v));
    int x = k == 0 ? 1 : v[k - 1];
    cout << (k < n && v[k] == x ? -1 : x);

    return 0;
}