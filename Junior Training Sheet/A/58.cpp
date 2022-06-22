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

    set<int> st;
    int t = 2;
    while (t--) {
        int p;
        cin >> p;
        for (int i = 0; i < p; i++) {
            int x;
            cin >> x;
            st.insert(x);
        }
    }
    cout << (st.size() == n ? "I become the guy." : "Oh, my keyboard!");

    return 0;
}