#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;
    if (n < m) cout << "G", m--;

    while (n && m) {
        cout << "BG";
        n--, m--;
    }
    while (n--) cout << "B";
    while (m--) cout << "G";

    return 0;
}