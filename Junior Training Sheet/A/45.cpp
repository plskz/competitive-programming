#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;
    set<char> st;

    for (auto x : s) {
        st.insert(tolower(x));
    }
    // cout << st.size() << '\n';
    cout << (st.size() >= 26 ? "YES" : "NO");

    return 0;
}