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

    int k, a, b;
    cin >> k >> a >> b;
    bool xd = 0;
    for (int i = a; i <= b; i++) {
        if (i % k == 0) {
            xd = 1;
            break;
        }
    }
    cout << (xd ? "OK" : "NG");

    return 0;
}