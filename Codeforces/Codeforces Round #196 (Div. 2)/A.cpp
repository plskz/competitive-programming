#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> v(m);
    for (auto &x : v) cin >> x;
    sort(all(v));

    int best = 987654321;
    for (int i = 0; i < m - n + 1; i++) {
        best = min(best, v[i + n - 1] - v[i]);
    }
    cout << best;

    return 0;
}