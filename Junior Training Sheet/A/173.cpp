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

    cout << n / 7 * 2 + (n % 7 == 6) << ' ';
    cout << n / 7 * 2 + min(2, n % 7);

    return 0;
}