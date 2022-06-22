#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using ll = long long;

using namespace std;

const int N = 1e4 + 5;
bool f[N];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i * i < N; i++) f[i * i] = 1;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool ans = true;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ans &= f[x];
        }
        cout << (!ans ? "YES" : "NO") << '\n';
    }

    return 0;
}