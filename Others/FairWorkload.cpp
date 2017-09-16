#include<bits/stdc++.h>
using namespace std;

class  FairWorkload {
    int w,n;
    vector<int> a;
    int l, r, ans;
public:
    int check(int val) {
        int cnt = 1, temp = 0;

        for (int i = 0; i < n; ++i) {
            if (temp + a[i] <= val) {
                temp += a[i];
            } else {
                ++cnt;
                temp = a[i];
            }
        }

    //  cout<< val <<" "<< cnt<<"\n";

        if (cnt > w) return -1;
        if (cnt <= w) return 1;
        else return 1;
    }

    int bsearch(int l, int r) {
        while (l < r) {
            cout<<l<<" "<<r<<" ";
            int mid = (l + r) >> 1;
            int res = check(mid);
            if(res<0){
                l=mid+1;

            }else{
                ans=min(ans,mid);
                r=mid;
            }
            
        } return ans;
    }
    int getMostWork(vector <int> folders, int workers) {
        n=folders.size();
        w = workers;
        a = folders;
        ans = INT_MAX;
        l = 0;
        r = 0;
        for (int v : folders) l = max(l, v), r += v;
        ++r;
        return bsearch(l, r);

    }
};
