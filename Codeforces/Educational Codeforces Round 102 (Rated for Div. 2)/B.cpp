#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using ll = long long;

using namespace std;

const int mx = 1e5 + 5;
int a[mx];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int i = n - 1;
    while (i && a[i - 1] < a[i]) i--;
    cout << i;

    return 0;
}