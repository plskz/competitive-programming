// e & s
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

    int n;
    cin >> n;
    vector<string> s(n);
    for (auto &x : s) cin >> x;
    sort(all(s), [&](const string &s, const string &t) { return s.size() < t.size(); });

    for (int i = 0; i < n - 1; i++) {
        if (s[i + 1].find(s[i]) == string::npos) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    for (auto x : s) cout << x << '\n';

    return 0;
}