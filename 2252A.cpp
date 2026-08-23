#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

bool cp(pair<int, int> a, pair<int, int> b){
    return a.second>b.second;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[1003] = {0};
        while (n--){
            int i; cin >> i;
            a[i]++;
        }
        vector<pair<int, int>> vec;
        for (int i=0; i<1001; i++){
            if (a[i]){
                vec.push_back({i, a[i]});
            }
        }
        sort(vec.begin(), vec.end(), cp);
        int ans = 0;
        queue<pair<int, int>> q;
        for (int i=0; i<vec.size(); i++){
            q.push({vec[i].first, vec[i].second});
        }
        while (q.size()>1){
            ans += q.front().first;
            if (q.front().second-1!=0){
                q.push({q.front().first, q.front().second--});
            }
            q.pop();
        }
        if (q.front().second==1){
            ans += q.front().first;
        } else{
            ans += q.front().first*2;
        }
        cout << ans << '\n';
    }
}