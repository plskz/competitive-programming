#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a == x || b == x || a + x == 7 || b + x == 7) return cout << "NO", 0;
    }
    cout << "YES";

    return 0;
}