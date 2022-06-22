#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<int, int> mp;
    for (int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    int ans;
    for (auto x : mp) {
        if (x.second == 1) ans = x.first;
    }
    cout << ans;

    return 0;
}