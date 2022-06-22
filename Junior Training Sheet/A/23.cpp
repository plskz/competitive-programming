#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n + 2, 0);
    for (int i = 1; i <= n; i++) cin >> v[i];
    int m;
    cin >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        v[x - 1] += y - 1;
        v[x + 1] += v[x] - y;
        v[x] = 0;
        // checking cur v
        // for(auto x : v) cout << x << ' ';
        // cout << '\n';
    }
    for (int i = 1; i <= n; i++) cout << v[i] << '\n';

    return 0;
}