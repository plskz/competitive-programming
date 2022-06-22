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
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    int k;
    cin >> k;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i].first <= k) {
            cout << n - i << '\n';
            return 0;
        }
    }

    return 0;
}