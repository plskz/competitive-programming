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
    vector<int> v;
    for (int i = 0; i < n; i++) {
        bool q = 1;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x == 1 || x == 3) q = 0;
        }
        if (q) v.push_back(i + 1);
    }

    cout << v.size() << '\n';
    for (auto x : v) cout << x << ' ';

    return 0;
}