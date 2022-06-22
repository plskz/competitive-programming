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

    int cur = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cur += x;
        int r = min(8, cur);
        cur -= r;
        k -= r;
        ans++;
        if (k <= 0) break;
    }

    cout << (k > 0 ? -1 : ans) << '\n';

    return 0;
}
