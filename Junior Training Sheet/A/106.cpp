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
    int cnt = 0;
    while (n--) {
        string s;
        cin >> s;
        cnt += s[1] == '+' ? 1 : -1;
    }
    cout << cnt;

    return 0;
}