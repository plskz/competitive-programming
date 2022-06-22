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

    int num[] = {0, 0};
    int val[2];

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        num[x % 2]++;
        val[x % 2] = i;
    }
    cout << (num[0] == 1 ? val[0] : val[1]);

    return 0;
}