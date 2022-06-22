#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s[4];
    for (int i = 0; i < 4; i++) cin >> s[i];

    int x = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            x = s[i][j] == '#';
            x += s[i + 1][j] == '#';
            x += s[i][j + 1] == '#';
            x += s[i + 1][j + 1] == '#';
            if (x != 2) return cout << "YES", 0;
        }
    }
    cout << "NO";

    return 0;
}