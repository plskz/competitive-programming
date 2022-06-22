#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

const int N = 1005;
int a[N], b;
bool temp[N];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            temp[a[i]] = true;
        }
        int e = -1;
        int b;
        for (int i = 0; i < m; i++) {
            cin >> b;
            if (temp[b]) e = b;
        }

        for (int i = 0; i < n; i++) temp[a[i]] = false;
        if (e == -1)
            cout << "NO\n";
        else
            cout << "YES\n1 " << e << '\n';
    }
    return 0;
}