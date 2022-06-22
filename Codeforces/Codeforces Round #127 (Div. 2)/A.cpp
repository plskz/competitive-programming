#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    char mx;
    map<char, int> mp;
    for (auto c : s) {
        if (c > mx) mx = c;
        mp[c]++;
    }

    for (int i = 0; i < mp[mx]; i++) cout << char(mx);

    return 0;
}