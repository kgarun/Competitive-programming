#include  <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

const int bsize = 317;

int a[N], px[N],  delta[N], blocknum[N], bmod[N];

vector< array<int, N> > m(317);

int main() {

#ifndef ONLINE_JUDGE
    freopen("/home/kg/Desktop/Cp/input.txt", "r", stdin);
    freopen("/home/kg/Desktop/Cp/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q, x, y, z, temp;

    cin >> n >> q;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }


    for (int i = 1; i <= n; ++i) {

        px[i] = a[i] ^ px[i - 1];

        blocknum[i] = i / bsize;

        bmod[i] = i % bsize;

        ++m[blocknum[i]][px[i]];
    }


    while (q--) {

        cin >> x >> y >> z;

        if (x == 2) {

            int cnt = 0;

            int l = 1, r = y;

            while (l < r and bmod[l]) {

                if ((px[l]^delta[blocknum[l]]) == z) ++cnt;

                ++l;
            }

            while (l + bsize <= r) {

                cnt += m[blocknum[l]][delta[blocknum[l]] ^ z];

                l += bsize;

            }

            while (l <= r) {

                if ( (px[l]^delta[blocknum[l]]) == z) ++cnt;

                ++l;

            }

            cout << cnt << '\n';

        }

        else {

            temp = z ^ a[y];

            a[y] = z;

            int l = y, r = n;

            while (l < r and bmod[l]) {

                --m[blocknum[l]][px[l]];

                px[l] ^= temp;

                ++m[blocknum[l]][px[l]];

                ++l;

            }

            while (l + bsize <= r) {

                delta[blocknum[l]] ^= temp;

                l += bsize;
            }


            while (l <= r) {

                --m[blocknum[l]][px[l]];

                px[l] ^= temp;

                ++m[blocknum[l]][px[l]];

                ++l;

            }

        }


    }
    return 0;
}