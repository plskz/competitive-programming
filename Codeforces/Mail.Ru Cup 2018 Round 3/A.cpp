#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    map<int, int> mp;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int r;
        cin >> r;
        for (int j = 0; j < r; j++) {
            int x;
            cin >> x;
            mp[x]++;
        }
    }

    for (auto x : mp) {
        if (x.second == n) cout << x.first << ' ';
    }

    return 0;
}