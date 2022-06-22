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

    int n, k;
    cin >> n >> k;
    set<int> s;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (!s.count(x)) {
            s.insert(x);
            v.push_back(i);
        }
    }

    if (v.size() < k) {
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    for (int i = 0; i < k; i++) cout << v[i] + 1 << ' ';

    return 0;
}