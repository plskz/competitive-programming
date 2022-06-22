#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int w, h, w1, h1, w2, h2;
    cin >> w >> h >> w1 >> h1 >> w2 >> h2;
    while (h) {
        w += h;
        if (h == h1) w = max(0, w - w1);
        if (h == h2) w = max(0, w - w2);
        h--;
    }
    cout << w;

    return 0;
}