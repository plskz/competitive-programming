#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, s;
    cin >> n >> s;
    int ans = s;
    while (n--) {
        int f, t;
        cin >> f >> t;
        ans = max(ans, f + t);
    }
    cout << ans;

    return 0;
}