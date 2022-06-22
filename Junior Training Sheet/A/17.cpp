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

    string s;
    cin >> s;

    char cur = 'a';
    int ans = 0;

    for (auto c : s) {
        ans += min(abs(cur - c), 26 - abs(cur - c));
        cur = c;
    }
    cout << ans;

    return 0;
}