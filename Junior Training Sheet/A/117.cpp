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

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[i % 3] += x;
    }

    string s[] = {"chest", "biceps", "back"};
    int i = 0;
    int ans = 0;
    int cur = -1;
    for (auto x : mp) {
        if (cur < x.second) ans = i, cur = x.second;
        i++;
    }
    cout << s[ans];

    return 0;
}