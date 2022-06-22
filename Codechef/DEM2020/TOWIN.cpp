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
        int n;
        cin >> n;
        ll a = 0, b = 0;
        vector<int> v(n);
        for (auto &x : v) cin >> x;
        sort(allr(v));
        for (int i = 0; i < n; i++) {
            if (i == 0)
                a += v[i];
            else if (i <= 2)  // 1 and 2
                b += v[i];
            else
                i & 1 ? a += v[i] : b += v[i];
        }
        cout << (a == b ? "draw" : a > b ? "first" : "second") << '\n';
    }

    return 0;
}