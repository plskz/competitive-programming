#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cout << s[i];
        if (i & 1 && i < n - 2) cout << '-';
    }

    return 0;
}