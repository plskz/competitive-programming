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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v) cin >> x;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                ok &= abs(v[i] - v[j]) != 1;
            }
        }
        cout << 2 - ok << '\n';
    }

    return 0;
}
