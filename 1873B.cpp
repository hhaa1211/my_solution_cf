#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n]; 
        int mul = 1;
        for (int &i : a){
            cin >> i;
        }
        int nn = 10, idnn = 0; 
        for (int i=0; i<n; i++){
            if (a[i]<nn){
                nn = a[i];
                idnn = i;
            }
        }
        a[idnn] = a[idnn]+1;
        for (int i : a){
            mul *= i;
        }
        cout << mul << endl;
    }
}