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
    int lucky = 0;
    for (auto c : s) 
        lucky += c == '7' || c == '4';
    cout << (lucky == 7 || lucky == 4 ? "YES" : "NO");

    return 0;
}