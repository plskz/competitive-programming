#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int dist = min(i, n - 1 - i) + min(j, n - 1 - j);
            cout << (dist < n / 2 ? '*' : 'D');
        }
        cout << '\n';
    }

    return 0;
}