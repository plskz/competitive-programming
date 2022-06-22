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
    int room = 0;
    while (n--) {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2) room++;
    }
    cout << room;

    return 0;
}