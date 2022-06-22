#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int p, n;
    cin >> p >> n;
    int a[301];
    memset(a, 0, sizeof a);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[x % p]++;
        if (a[x % p] > 1) return cout << i, 0;
    }
    cout << -1;

    return 0;
}