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
    while (n++) {
        string s = to_string(n);
        set<int> st;
        for (int i = 0; i < 4; i++) st.insert(s[i] - '0');
        if (st.size() == 4) {
            cout << n;
            return 0;
        }
    }

    return 0;
}