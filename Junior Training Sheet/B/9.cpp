#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[x] = i;
    }
    cin >> m;
    ll l = 0, r = 0;
    while (m--) {
        int x;
        cin >> x;
        l += a[x];
        r += n - a[x] + 1;
    }
    cout << l << ' ' << r;

    return 0;
}