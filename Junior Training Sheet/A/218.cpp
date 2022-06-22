#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, d;
    cin >> k >> d;
    if (k > 1 && !d)
        cout << "No solution";
    else
        cout << d << string(k - 1, '0');

    return 0;
}