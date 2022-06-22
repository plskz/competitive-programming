#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int p1, pn;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x == 1) p1 = i;
        if (x == n) pn = i;
    }
    cout << max({p1 - 1, pn - 1, n - p1, n - pn});

    return 0;
}