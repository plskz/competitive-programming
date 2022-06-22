#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int num[] = {0, 0};
    int val[2];

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        // cout << x%2 << '\n';
        num[x % 2]++;
        val[x % 2] = i;
    }
    cout << (num[0] == 1 ? val[0] : val[1]);

    return 0;
}