#include <iostream>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        map<int, int> m;
        for (int i=0; i<n; i++){
            int x; cin >> x;
            m[x]++;
        }
        if (m.size()>2){
            cout << "NO";
        } else{
            if (m.size()==1){
                cout << "YES";
            } else{
                if (m.begin()->second==n/2 || m.rbegin()->second==n/2){
                    cout << "YES";
                } else{
                    cout << "NO";
                }
            }
        }
        cout << '\n';
    }
}