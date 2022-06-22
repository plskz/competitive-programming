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

    int ans = 0, c = 0;
    char l = 'A';
    for (char d : s) {
        if (d == l) {
            ++c;
            ans = max(c, ans);
        } else {
            l = d;
            c = 1;
        }
    }

    cout << ans;

    return 0;
}