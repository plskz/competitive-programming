#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int x, y;

int minCost(string s, char c) {
    int ans = 0;
    replace(all(s), '?', c);
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] != s[i + 1] && s[i] == 'C') ans += x;
        if (s[i] != s[i + 1] && s[i] == 'J') ans += y;
    }
    return ans;
}

void solve() {
    string s;
    cin >> x >> y >> s;
    int questions = 0;
    for (auto c : s) questions += c == '?';

    int ans = 0;

    // no '?'
    if (questions == 0) {
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] != s[i + 1] && s[i] == 'C') ans += x;
            if (s[i] != s[i + 1] && s[i] == 'J') ans += y;
        }
    } else {
        ans = min(minCost(s, 'C'), minCost(s, 'J'));
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // WA. AC on Sample Test only. :(
    // resolve soon.

    int t;
    cin >> t;
    int i = 1;
    while (t--) {
        cout << "Case #" << i++ << ": ";
        solve();
    }

    return 0;
}