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

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == s[i + 1]) cnt++;
    }

    cout << cnt;

    return 0;
}