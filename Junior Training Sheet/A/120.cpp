#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;

    vector<int> v;
    int k;
    for (int i = 0; i < n; i++) {
        k = i;
        if (s[i] == 'B') {
            while (s[k] == 'B') k++;
            v.push_back(k - i);
            i = k;
        } else {
            continue;
        }
    }
    cout << v.size() << '\n';
    for (auto x : v) cout << x << ' ';

    return 0;
}