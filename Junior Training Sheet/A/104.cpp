#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> score(n);
    for (auto &x : score) cin >> x;
    sort(all(score));
    int best = max(1, score[n - k]);
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (score[i] >= best) cnt++;

    cout << cnt;

    return 0;
}