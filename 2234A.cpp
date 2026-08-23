#include <iostream>
#include <algorithm>

using namespace std;

bool cp(int a, int b){
    return a>b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for (int &i : a) cin >> i;
        sort(a, a+n, cp);
        int flag = 1;
        for (int i=2; i<n; i++){
            if (a[i-2]%a[i-1]!=a[i]){
                flag = 0;
                break;
            }
        }
        if (flag){
            cout << a[0] << ' ' << a[1] << endl;
        } else{
            cout << -1 << endl;
        }
    }   
}