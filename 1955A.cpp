#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, a, b; 
        cin >> n >> a >> b;
        if (2*a<=b){
            cout << n*a << '\n';
        } else{
            cout << (n/2)*b+(n%2)*a<< '\n';
        }
    }
}