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

    ll a, s;
    cin >> a >> s;
    string q = to_string(s - a);
    string qq = to_string(a);
    sort(all(q));
    sort(all(qq));
    cout << (q == qq ? "YES" : "NO");

    return 0;
}