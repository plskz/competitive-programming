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

    int t;
    cin >> t;

    int ac = 0;
    while (t--) {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            int x;
            cin >> x;
            sum += x;
        }
        if (sum >= 2) ac++;
    }

    cout << ac;

    return 0;
}