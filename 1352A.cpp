#include <iostream>
#include <vector>

using namespace std;

int bpow(int x, int y){
    int res = 1;
    while (y){
        if (y%2){
            res *= x;
        }
        y /= 2;
        x *= x;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string n; cin >> n;
        vector<int> vec;
        for (int i=0; i<n.length(); i++){
            if (n[i]!='0'){
                vec.push_back((n[i]-'0')*bpow(10, (n.length()-i-1)));
            }
        }
        cout << vec.size() << endl; 
        for (int i : vec){
            cout << i << ' ';
        }
        cout << endl;
    }
}