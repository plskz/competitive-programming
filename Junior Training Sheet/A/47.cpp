#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("output.out", "w", stdout);

    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    string s;
    cin >> c >> s;

    for (int i = 0; i < s.size(); i++) {
        if (c == 'R') {
            cout << key[key.find(s[i]) - 1];
            // cout << key[s.find(s[i])];
        } else {
            cout << key[key.find(s[i]) + 1];
        }
    }

    return 0;
}