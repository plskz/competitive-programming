#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    int a = 0, b = 0;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
        if (s[i] != '4' && s[i] != '7') return cout << "NO", 0;
    for (int i = 0; i < n / 2; i++) a += s[i] - '0';
    for (int i = n / 2; i < n; i++) b += s[i] - '0';

    cout << (a == b ? "YES" : "NO");

    return 0;
}