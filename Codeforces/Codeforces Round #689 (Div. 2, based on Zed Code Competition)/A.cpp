#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end();
#define allr(x) (x).rbegin(), (x).rend();

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string f = "abc";
        for (int i = 0; i < n; i++) cout << f[i % 3];
        cout << '\n';
    }

    return 0;
}