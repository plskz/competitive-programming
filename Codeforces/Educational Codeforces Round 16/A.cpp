#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    char c;
    int d;
    cin >> c >> d;

    int k = 8;
    if ((c == 'a' || c == 'h') && (d == 1 || d == 8)) return cout << 3, 0;
    if (d == 1 || d == 8) k -= 3;
    if (c == 'a' || c == 'h') k -= 3;
    cout << k;

    return 0;
}