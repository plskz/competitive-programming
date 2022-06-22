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
    n -= 10;
    if (n == 10)
        cout << 15;
    else if (n > 0 && n < 12)
        cout << 4;
    else
        cout << 0;

    return 0;
}