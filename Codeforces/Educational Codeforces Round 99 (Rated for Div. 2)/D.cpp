#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (auto &x : v) cin >> x;

        if (is_sorted(all(v)))
            cout << 0 << '\n';
        else {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (v[i] > x) swap(x, v[i]), cnt++;
                if (is_sorted(all(v))) break;
            }
            if (is_sorted(all(v)))
                cout << cnt << '\n';
            else
                cout << -1 << '\n';
        }
    }

    return 0;
}