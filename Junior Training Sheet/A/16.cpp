#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int a[5];
    string s;

    for (int i = 1; i <= 4; i++) cin >> a[i];
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.size(); i++) sum += a[s[i] - '0'];
    cout << sum;

    return 0;
}