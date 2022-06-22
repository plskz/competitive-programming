#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 2 && k > 0)
            k--;
        else if (x == 2 && m > 0)
            m--;
        else if (x == 1 && m > 0)
            m--;
        else
            ans++;
    }
    cout << ans;

    return 0;
}