#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(all(v));
    for (int i = 0; i < n; i++) {
        int x = v[i].first;
        int y = v[i].second;
        if (x < s)
            s += y;
        else
            return cout << "NO", 0;
    }
    cout << "YES";

    return 0;
}