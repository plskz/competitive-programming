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
    bool f = 1;
    for (int i = 1; i < s.size(); i++) {
        if (islower(s[i])) f = 0;
    }
    if (f) {
        for (int i = 0; i < s.size(); i++) {
            s[i] ^= 32;
        }
    }
    cout << s;

    return 0;
}