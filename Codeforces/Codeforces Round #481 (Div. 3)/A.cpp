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

    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    for (auto &x : a) cin >> x;
    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = i; j < n; j++) {
            freq += a[i] == a[j] ? 1 : 0;
        }
        if (freq == 1) v.push_back(a[i]);
    }
    cout << v.size() << '\n';
    for (auto x : v) cout << x << ' ';

    return 0;
}