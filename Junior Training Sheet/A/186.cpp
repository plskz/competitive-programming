#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int ans = 0;
    int prev = -1;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt = x >= prev ? ++cnt : 1;
        prev = x;
        ans = max(ans, cnt);
    }
    cout << ans;

    return 0;
}