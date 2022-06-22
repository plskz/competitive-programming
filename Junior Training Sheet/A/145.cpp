#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // e/s

    int n;
    cin >> n;
    int a[n + 1];
    int res = 0;
    for (int i = 01; i <= n; i++) {
        cin >> a[i];
        res += a[i];
    }
    int l, r;
    cin >> l >> r;
    int cnt = 0;
    while (l != r) {
        cnt += a[l++];
        if (l > n) l = 1;
    }
    cout << min(cnt, res - cnt);

    return 0;
}