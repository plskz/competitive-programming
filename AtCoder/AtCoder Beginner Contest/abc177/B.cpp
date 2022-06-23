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

    string s, t;
    cin >> s >> t;

    int ans = 1001;

    for (int i = 0; i <= s.size() - t.size(); i++) {
        int diff = 0;
        for (int j = 0; j < t.size(); j++) {
            if (t[j] != s[i + j]) diff++;
        }
        ans = min(ans, diff);
    }

    cout << ans;

    return 0;
}