#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;
    cout << __builtin_popcount(x);

    // int x; cin >> x;
    // int cnt = 0;
    // while(x) {
    //     cnt += x & 1; // if(x & 1) cnt++;
    //     x >>= 1;
    // }
    // cout << cnt;

    // int x; cin >> x;
    // bitset<64> b(x);
    // cout << b.count();

    // int x; cin >> x;
    // int cnt = 0;
    // while(x)
    //     cnt += x&1, x/=2;
    // cout << cnt;

    return 0;
}