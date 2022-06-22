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
    set<char> st;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        st.insert(c);
    }

    // if(n > 26)
    //     cout << -1;
    // else
    //     cout << n - st.size();

    // cout << (n > 26 ? -1 : n - st.size()); // doesn't work. if true it outputs some fckin shit because of casting shits

    // cout << (n > 26 ? -1 : int(n - st.size()));  //ok
    cout << (n > 26 ? -1 : n - (int)st.size());  // ok

    return 0;
}