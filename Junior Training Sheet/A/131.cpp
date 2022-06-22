#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int b[200];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        for (int j = x; j <= n; j++) {
            if (!b[j]) b[j] = x;
        }
    }

    for (int i = 1; i <= n; i++) cout << b[i] << ' ';

    return 0;
}