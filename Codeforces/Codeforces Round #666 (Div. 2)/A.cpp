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

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> cnt(26);

        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;

            for (auto c : s) ++cnt[c - 'a'];
        }

        bool ans = true;

        for (int i = 0; i < 26; ++i) {
            if (cnt[i] % n != 0) {
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES" : "NO") << '\n';
    }

    return 0;
}