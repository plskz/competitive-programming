#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

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
        mp[x]++;
    }

    // checking the mp shit
    // for(auto x : mp) {
    //     cout << x.first << ' ' << x.second << '\n';
    // }
    /*
        test case #4
        input:
            4
            1 2 3 4
        output:
            2
        -------------------
        mp.first  mp.second
            1        1
            2        1
            3        1
            4        1
         n-1-1 (first and last of mp.second)
       = 4-1-1 = 2
    */
    // cout << mp.begin()->second << '\n';
    // cout << mp.rbegin()->second << '\n';
    cout << max(0, n - mp.begin()->second - mp.rbegin()->second);

    return 0;
}