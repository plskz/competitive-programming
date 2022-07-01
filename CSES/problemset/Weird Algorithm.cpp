#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    cout << n << ' ';
    while (n != 1) {
        if (n & 1)
            n = n * 3 + 1;
        else
            n /= 2;
        cout << n << ' ';
    }
}