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

        vector<int> v;

        for (int i = 0; i < 2 * n; ++i) {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(all(v));
        cout << v[n] - v[n - 1] << '\n';
    }

    return 0;
}
