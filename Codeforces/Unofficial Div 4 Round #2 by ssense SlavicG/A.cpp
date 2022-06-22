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

    int n, k;
    cin >> n >> k;

    map<int, int> mp;

    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }

    int impo = 0;

    for (int i = 1; i <= n; i++)
        if (mp[i] == 0) impo++;

    cout << (impo == 1 ? "YES" : "NO");

    return 0;
}