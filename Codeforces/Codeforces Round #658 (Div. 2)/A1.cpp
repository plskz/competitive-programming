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
        int n, m;
        cin >> n >> m;
        set<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.insert(x);
        }
        int ans = -1;
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            if (a.count(x)) ans = x;
        }
        if (ans == -1)
            cout << "NO\n";
        else
            cout << "YES\n1 " << ans << '\n';
    }
    return 0;
}