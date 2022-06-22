#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int cur = 0, ans = 0;
        while (cur < x) cur += ++ans;
        ans += cur - 1 == x ? 1 : 0;
        cout << ans << '\n';
    }

    return 0;
}