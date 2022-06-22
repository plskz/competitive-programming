#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

bool vowel(char c) { 
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; 
}

int f[3];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i++) {
        int cnt = 0;
        string s;
        getline(cin, s);
        for (auto c : s) {
            if (vowel(c)) cnt++;

            if ((i == 0 || i == 2) && cnt == 5)
                f[i] = 1;
            else if (i == 1 && cnt == 7)
                f[i] = 1;
            else
                f[i] = 0;
        }
    }

    int ans = accumulate(f, f + 3, 0);
    cout << (ans == 3 ? "YES" : "NO");

    return 0;
}