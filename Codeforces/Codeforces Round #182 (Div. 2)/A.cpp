#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int a[2] = {0};
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x > 0]++;  // if x is 1 then do a[1]++
    }

    while (m--) {
        int l, r;
        cin >> l >> r;
        int x = r - l + 1;
        cout << (x % 2 == 0 && min(a[0], a[1]) >= x / 2) << '\n';
    }

    return 0;
}