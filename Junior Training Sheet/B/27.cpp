#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k, t;
    cin >> n >> m >> k >> t;

    vector<int> v(k);
    int x, y;
    for (int i = 0; i < k; i++) {
        cin >> x >> y;
        x--, y--;
        v[i] = x * m + y;
    }

    sort(all(v));
    string s[] = {"Carrots", "Kiwis", "Grapes"};

    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        x--, y--;
        int tmp = x * m + y;
        int idx = lower_bound(all(v), tmp) - v.begin();
        cerr << "tmp: " << tmp << " index: " << idx << " v[index]: " << v[idx] << '\n';
        cout << (idx < k && v[idx] == tmp ? "Waste" : s[(tmp - idx) % 3]) << '\n';
    }

    return 0;
}