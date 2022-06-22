#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;
    string tmp;
    for (int i = 0; i < n; i++) {
        if ((n - i) & 1)
            tmp = tmp + s[i];
        else
            tmp = s[i] + tmp;
    }
    cout << tmp;

    return 0;
}