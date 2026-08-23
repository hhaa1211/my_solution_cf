#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> vec;
        for (int i=0; i<n; i++){
            string s; cin >> s;
            for (int j=0; j<4; j++){
                if (s[j]=='#'){
                    vec.push_back(j+1);
                    break;
                }
            }
        }
        for (int i=vec.size()-1; i>=0; i--){
            cout << vec[i] << ' ';
        }
        cout << '\n';
    }
}