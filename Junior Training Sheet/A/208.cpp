#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int ans = 1;
    int cnt = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i - 1] == s[i])
            cnt++;
        else
            cnt = 0, ans++;

        if (cnt == 5) cnt = 0, ans++;
    }
    cout << ans;

    return 0;
}