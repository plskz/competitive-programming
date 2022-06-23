#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> p(n);
    for (auto &x : p) cin >> x;
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] != i + 1) k++;
    }
    cout << (k <= 2 ? "YES" : "NO");

    return 0;
}