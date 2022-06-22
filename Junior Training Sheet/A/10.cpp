#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string s;
    cin >> s;

    set<char> st;
    for (auto x : s) st.insert(x);

    cout << (st.size() & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");

    return 0;
}