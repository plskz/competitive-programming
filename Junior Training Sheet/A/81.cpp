#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    ll ans = 0;
    for (int i = 1; i <= n; i++) ans += (m + i % 5) / 5;
    cout << ans;

    return 0;
}