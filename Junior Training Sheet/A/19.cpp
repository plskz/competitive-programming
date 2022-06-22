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

    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 10; i++) {
        if (i * k % 10 == 0 || i * k % 10 == r) {
            cout << i;
            break;
        }
    }

    return 0;
}