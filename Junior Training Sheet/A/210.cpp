#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;
    if (k == 0) return cout << 0, 0;
    vector<int> v(12);
    for (auto &x : v) cin >> x;
    sort(all(v));
    // for(auto x : v) cout << x << ' ';
    int ans = 0, sum = 0;
    cout << '\n';
    for (int i = 11; i >= 0; i--) {
        sum += v[i];
        ans++;
        if (sum >= k) return cout << ans, 0;
    }
    cout << -1;

    return 0;
}