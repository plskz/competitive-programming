#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    int ans = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'R' && s[i + 1] == 'L') 
            ans = min(ans, (v[i + 1] - v[i]) / 2);
    }
    cout << (ans == INT_MAX ? -1 : ans);

    return 0;
}