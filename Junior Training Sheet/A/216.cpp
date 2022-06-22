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
    bool f = 0;
    for (auto x : {4, 7, 47, 74, 477}) f += n % x == 0;
    cout << (f ? "YES" : "NO");

    return 0;
}