#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<char, int> mp;
    mp['A'] = mp['B'] = mp['C'] = 0;

    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        mp[s[1] == '>' ? s[0] : s[2]]++;
    }

    map<int, char> f;
    for (auto [x, y] : mp) f[y] = x;

    if (f.size() != 3)
        cout << "Impossible";
    else
        for (auto [x, y] : f) cout << y;

    return 0;
}