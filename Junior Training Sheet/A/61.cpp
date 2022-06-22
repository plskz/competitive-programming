#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        mp[x]++;
    }

    string ans;
    int cur = 0;
    for (auto x : mp) {
        if (cur < x.second) {
            cur = x.second;
            ans = x.first;
        }
    }
    cout << ans;

    return 0;
}