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
    cin >> n;

    int home[n], guest[n];

    int ans = 0;

    for (int i = 0; i < n; i++) cin >> home[i] >> guest[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (home[i] == guest[j]) ++ans;
        }
    }

    cout << ans;

    return 0;
}