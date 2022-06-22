#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    int ans = 0;
    while (n--) {
        string s;
        cin >> s;
        int cnt = 0;
        for (auto c : s)
            if (c == '4' || c == '7') cnt++;
        ans += cnt <= k;
    }
    cout << ans;

    return 0;
}