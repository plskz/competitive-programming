#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int cnt = 0;
    while (s.size() > 1) {
        int tmp = 0;
        for (auto c : s) tmp += c - '0';
        s = to_string(tmp);
        cnt++;
    }
    cout << cnt;

    return 0;
}