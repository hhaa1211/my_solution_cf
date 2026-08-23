#include <iostream>
#include <utility> 
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int, int>> vec;
    while (n--){
        int h, a; cin >> h >> a;
        vec.push_back({h, a});
    }
    int res = 0;
    for (int i=0; i<vec.size(); i++){
        for (int j=0; j<vec.size(); j++){
            if (i!=j && vec[i].first==vec[j].second){
                res++;
            }
        }
    }
    cout << res;
}