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

    sort(all(s));

    cout << (s[0] == s[1] && s[1] != s[2] && s[2] == s[3] ? "Yes" : "No");

    return 0;
}