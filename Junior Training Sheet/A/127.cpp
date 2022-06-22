#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    int aa = 0, ab = 0, bb = 0;
    for (int i = 1; i <= 6; i++) {
        aa += abs(a - i) < abs(b - i);
        ab += abs(a - i) == abs(b - i);
        bb += abs(a - i) > abs(b - i);
    }
    cout << aa << ' ' << ab << ' ' << bb;

    return 0;
}