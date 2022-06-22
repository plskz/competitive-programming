#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    pair<int, int> pr[m];

    for (int i = 0; i < m; i++) {
        cin >> pr[i].second >> pr[i].first;
    }
    sort(pr, pr + m);
    int ans = 0;
    for (int i = m - 1; i >= 0 && n; i--) {
        ans += min(n, pr[i].second) * pr[i].first;
        n -= min(n, pr[i].second);
    }
    cout << ans;

    return 0;
}