#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    for (int i = 0; i < n; i++) {
        int x = 1;
        for (int j = 0; j < n; j++) {
            x += v[i] < v[j];
        }
        cout << x << ' ';
    }

    return 0;
}