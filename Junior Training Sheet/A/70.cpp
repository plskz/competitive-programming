#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll l, r;
    cin >> l >> r;
    if (l % 2 != 0) l++;
    if (l + 2 > r)
        cout << -1;
    else
        cout << l << ' ' << l + 1 << ' ' << l + 2;

    return 0;
}