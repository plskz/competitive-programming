#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    for (int i = 2; i < s.size(); i++) {
        if (s[i] - 'A' != (s[i - 1] - 'A' + s[i - 2] - 'A') % 26) return cout << "NO", 0;
    }
    cout << "YES";

    return 0;
}