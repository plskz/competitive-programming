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
    for (int i = 0; i < s.size(); i++) {
        if (s[i] - '0' >= 5) s[i] = '9' - (s[i] - '0');
    }
    if (s[0] == '0') s[0] = '9';
    cout << s;

    return 0;
}