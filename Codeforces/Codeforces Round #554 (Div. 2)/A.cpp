#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    int a1 = 0, a2 = 0;  // a1=Odd | a2=Even
    for (int i = 0; i < n; i++) {
        a[i] & 1 ? a1++ : a2++;
    }

    int b1 = 0, b2 = 0;  // b1=Odd | b2=Even
    for (int i = 0; i < m; i++) {
        b[i] & 1 ? b1++ : b2++;
    }
    cout << min(a2, b1) + min(a1, b2);

    return 0;
}