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
    int a[n];
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x - 1] = i + 1;
    }
    for (auto x : a) cout << x << ' ';

    return 0;
}