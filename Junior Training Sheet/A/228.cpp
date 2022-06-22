#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int a[26];  // keys

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (auto c : s) {
        if (islower(c))
            a[c - 'a']++;
        else if (isupper(c) && a[c - 'A'] > 0)
            a[c - 'A']--;
        else
            ans++;
    }
    // for(int i=0; i<26; i++) {
    //     cout << a[i] << ' ';
    // }
    // cout << '\n';
    cout << ans;

    return 0;
}