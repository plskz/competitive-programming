#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    /*
        a = the size of data needed to watch one second of the video
        b = the size of data Valeric and Valerko can download from the Net per second
        c = the video's length in seconds
    */
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((c * a - 1) / b + 1) - c;

    /*using bs
        int a, b, c;
        cin >> a >> b >> c;
        int l = 1, r = 1e6;
        while(l < r) {
            int m = l + (r-l) / 2;
            if((c*b)+(b*m) >= (c*a))
                r = m;
            else
                l = m+1;
        }
        cout << l;
    */

    return 0;
}