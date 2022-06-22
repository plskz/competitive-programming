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

    int pos = 0;

    for (int i = 0; i < t.size(); i++) {
        if (s[pos] == t[i]) pos++;
    }

    cout << pos + 1;

    return 0;
}