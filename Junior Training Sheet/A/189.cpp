#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m[5];
    int w[5];
    for (int i = 0; i < 5; i++) cin >> m[i];
    for (int i = 0; i < 5; i++) cin >> w[i];
    int h1, h2;
    cin >> h1 >> h2;

    int score = 100 * h1 - 50 * h2;

    for (int i = 0, p = 500; i < 5; i++, p += 500) score += max(p / 10 * 3, p - p / 250 * m[i] - 50 * w[i]);

    cout << score;

    return 0;
}