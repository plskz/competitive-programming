#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int y, w;
    cin >> y >> w;
    string res[] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    int mx = max(y, w);
    cout << res[6 - mx];

    return 0;
}