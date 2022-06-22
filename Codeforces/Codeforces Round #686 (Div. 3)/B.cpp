#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> cnt(n + 1), idx(n + 1);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ++cnt[x];
            idx[x] = i + 1;
        }
        int ans = -1;
        for (int i = 0; i <= n; i++) {
            if (cnt[i] == 1) {
                ans = idx[i];
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}