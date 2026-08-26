#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int a[3];
        for (int &i : a){
            cin >> i;
        }
        sort(a, a+3);
        if (a[0]+a[1]<a[2]){
            cout << a[1];
        } else{
            cout << a[2]-a[0];
        }
        cout << '\n';
    }
}