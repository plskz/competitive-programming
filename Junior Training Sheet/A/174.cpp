#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int a[100];
    set<int> st;

    for (int i = 0; i < k; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }

    int tmp = 1;
    for (int i = 0; i < k; i++) {
        cout << a[i] << ' ';
        for (int j = 1; j < n; j++) {
            while (st.count(tmp)) tmp++;
            cout << tmp++ << ' ';
        }
        cout << '\n';
    }

    return 0;
}