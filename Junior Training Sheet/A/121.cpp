#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, n, w;
    cin >> k >> n >> w;
    int x = 0;
    for (int i = 1; i <= w; i++) x += i * k;
    cout << (x > n ? x - n : 0);

    return 0;
}