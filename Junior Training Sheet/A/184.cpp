#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    map<int, int> mp;

    for (int i = 0; i < 16; i++) {
        char c;
        cin >> c;
        mp[c - '0']++;
    }
    bool f = 1;
    for (auto x : mp) {
        // cout << x.first << ' ' << x.second << '\n';
        if (x.first == -2) continue;
        if (x.second > 2 * k) {
            f = 0;
            break;
        }
    }
    cout << (f ? "YES" : "NO");

    return 0;
}