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
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        bool f = 1;
        for (int j = 0; j < s.size(); j++) {
            if (a[i][j] != s[j]) f = 0;
        }
        if (f) return cout << a[i], 0;
    }
    cout << s;

    return 0;
}