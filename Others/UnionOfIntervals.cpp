#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

class  UnionOfIntervals {

public:
    int nthElement(vector <int> lowerBound, vector <int> upperBound, int n) {

        ll sz = (ll)lowerBound.size();

        vector< pair<ll,ll> > lim(sz);

        ++n;

        for (int i = 0; i < sz; ++i) {

            lim[i] = make_pair((ll)lowerBound[i],(ll) upperBound[i]);

        }

        sort(lim.begin(), lim.end());

        for (int i = 0; i < sz; ++i) {
            if (lim[i].second - lim[i].first + 1 >= n ) {

                return (int)(lim[i].first + n - 1);

            } else if (lim[i + 1].first <= lim[i].second) {

                lim[i + 1].first = lim[i].first;

            } else n -= lim[i].second - lim[i].first + 1 ;
        }

    }
};

int main() {

    vector<int> a = { -1500000000 };
    vector<int> b = {1500000000};

    UnionOfIntervals u;

    cout << u.nthElement(a, b, 1500000091);

}