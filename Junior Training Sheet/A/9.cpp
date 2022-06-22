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

    string a, b;
    cin >> a >> b;

    transform(all(a), a.begin(), ::tolower);
    transform(all(b), b.begin(), ::tolower);

    cout << (a == b ? 0 : a < b ? -1 : 1);

    return 0;
}