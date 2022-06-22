#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string s;
    cin >> s;
    ll ans = 0;
    for (ll i = 0; i < s.size(); i++)
        if (s[i] == '4' || s[i] == '7') ans++;
    cout << (ans == 4 || ans == 7 ? "YES" : "NO");

    return 0;
}