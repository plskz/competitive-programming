#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    int ans = INT_MIN;
    while (n--) {
        int f, t;
        cin >> f >> t;
        ans = t > k ? max(ans, f - (t - k)) : max(ans, f);
    }
    cout << ans;

    return 0;
}