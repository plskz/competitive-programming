#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string alphabet;
    for (char c = 'a'; c <= 'z'; c++) alphabet += c;

    int n, m;
    string s;
    cin >> n >> m >> s;
    while (m--) {
        char x, y;
        cin >> x >> y;
        for (int i = 0; i < 26; i++) {
            if (alphabet[i] == x)
                alphabet[i] = y;
            else if (alphabet[i] == y)
                alphabet[i] = x;
        }
    }
    // cout << alphabet;

    for (auto x : s) cout << alphabet[x - 'a'];

    return 0;
}