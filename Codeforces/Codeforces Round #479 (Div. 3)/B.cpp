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
    string s;
    cin >> n >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++) mp[s.substr(i, 2)]++;
    string ans;
    int mx = 0;
    for (auto x : mp) {
        if (x.second > mx) {
            mx = x.second;
            ans = x.first;
        }
    }
    cout << ans;

    return 0;
}