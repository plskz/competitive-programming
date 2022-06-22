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
    deque<int> dq(n);
    for (auto &x : dq) cin >> x;

    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (i & 1)
            b += max(dq.front(), dq.back());
        else
            a += max(dq.front(), dq.back());

        if (dq.front() > dq.back())
            dq.pop_front();
        else
            dq.pop_back();
    }
    cout << a << ' ' << b;

    return 0;
}