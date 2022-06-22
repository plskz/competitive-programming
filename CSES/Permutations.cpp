#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (n == 1)
        cout << "1";
    else if (n < 4)
        cout << "NO SOLUTION";
    else {
        for (int i = 2; i <= n; i += 2) cout << i << ' ';
        for (int i = 1; i <= n; i += 2) cout << i << ' ';
    }

    return 0;
}
