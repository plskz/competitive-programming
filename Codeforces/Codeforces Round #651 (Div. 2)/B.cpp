#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v[2];
        v[0].reserve(2 * n);
        v[1].reserve(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;
            v[x & 1].push_back(i);
        }
        for (int i = 0; i < n - 1; i++) {
            int x = (v[0].size() >= 2) ? 0 : 1;
            cout << v[x].back() + 1 << ' ';
            v[x].pop_back();
            cout << v[x].back() + 1 << '\n';
            v[x].pop_back();
        }
    }

    return 0;
}