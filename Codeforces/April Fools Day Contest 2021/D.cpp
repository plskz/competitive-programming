#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    set<int> st;
    while (n) {
        if (st.count(n % m)) return cout << "NO", 0;
        st.insert(n % m);
        n /= m;
    }
    cout << "YES";

    return 0;
}