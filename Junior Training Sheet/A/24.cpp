#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, b, d;
    cin >> n >> b >> d;
    int ans(0), cur(0);
    while (n--) {
        int x;
        cin >> x;
        if (x > b) continue;
        cur += x;
        if (cur > d) ans++, cur = 0;
    }
    cout << ans;

    return 0;
}