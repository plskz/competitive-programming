#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int T(int x) { 
    return x * (x + 1) / 2; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int i;
    for (i = 1; T(i) < n; i++);
    cout << (T(i) == n ? "YES" : "NO");

    return 0;
}