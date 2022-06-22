#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n & 1)
            cout << "Bob\n";
        else if (n % 4 == 0)
            cout << "Draw\n";
        else
            cout << "Alice\n";
    }

    return 0;
}