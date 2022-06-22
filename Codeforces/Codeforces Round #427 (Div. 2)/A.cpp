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

    ll s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    ll q1 = 2 * t1 + s * v1;
    ll q2 = 2 * t2 + s * v2;
    cout << (q1 == q2 ? "Friendship" : q1 < q2 ? "First" : "Second");

    return 0;
}